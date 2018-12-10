// MyProject.cpp

#include "targetver.h"
#include "MWindowBase.hpp"

const TCHAR *g_prefix = TEXT("");

void my_tprintf(const TCHAR *fmt, ...)
{
    TCHAR szText[512];
    va_list va;
    va_start(va, fmt);
    StringCchVPrintf(szText, 512, fmt, va);
    _fputts(szText, stdout);
    va_end(va);
}

#define MSGDUMP_PREFIX g_prefix
#define MSGDUMP_TPRINTF my_tprintf
#include "msgdump.h"

struct ENUM_PARAM
{
    DWORD pid;
    HWND hwndIme;
    HWND hwndImeUI;
};

static BOOL CALLBACK FindImeProc(HWND hwnd, LPARAM lParam)
{
    ENUM_PARAM *pParam = (ENUM_PARAM *)lParam;

    DWORD pid;
    GetWindowThreadProcessId(hwnd, &pid);

    if (pid == pParam->pid)
    {
        TCHAR szClass[8];
        GetClassName(hwnd, szClass, 8);
        if (lstrcmpi(szClass, TEXT("IME")) == 0)
        {
            pParam->hwndIme = hwnd;
            return FALSE;
        }
    }
    return TRUE;
}

HWND FindImeWindow(HWND hwnd)
{
    DWORD pid;
    GetWindowThreadProcessId(hwnd, &pid);

    ENUM_PARAM param;
    param.pid = pid;
    param.hwndIme = NULL;

    EnumWindows(FindImeProc, (LPARAM)&param);

    return param.hwndIme;
}

WNDPROC g_fnEditProcOld = NULL;

LRESULT CALLBACK
EditWrapWindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    if (InSendMessage())
        g_prefix = TEXT("EDIT:S: ");
    else
        g_prefix = TEXT("EDIT:P: ");
    MD_msgdump(hwnd, uMsg, wParam, lParam);
    LRESULT lResult = CallWindowProc(g_fnEditProcOld, hwnd, uMsg, wParam, lParam);
    g_prefix = TEXT("EDIT:R: ");
    MD_msgresult(hwnd, uMsg, wParam, lParam, lResult);
    return lResult;
}

WNDPROC g_fnImeProcOld = NULL;

LRESULT CALLBACK
ImeWrapWindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    if (InSendMessage())
        g_prefix = TEXT("IME:S: ");
    else
        g_prefix = TEXT("IME:P: ");
    MD_msgdump(hwnd, uMsg, wParam, lParam);
    LRESULT lResult = CallWindowProc(g_fnImeProcOld, hwnd, uMsg, wParam, lParam);
    g_prefix = TEXT("IME:R: ");
    MD_msgresult(hwnd, uMsg, wParam, lParam, lResult);
    return lResult;
}

class MMainWnd : public MWindowBase
{
public:
    HINSTANCE   m_hInst;        // the instance handle
    HICON       m_hIcon;        // the main icon
    HICON       m_hIconSm;      // the small icon
    HACCEL      m_hAccel;       // the access keys
    HWND        m_edt1;
    HWND        m_ime;

    MMainWnd(HINSTANCE hInst)
        : m_hInst(hInst),
          m_hIcon(NULL), m_hIconSm(NULL), m_hAccel(NULL)
    {
    }

    virtual ~MMainWnd()
    {
    }

    virtual LPCTSTR GetWndClassNameDx() const
    {
        return TEXT("MZC4 MMainWnd Class");
    }

    virtual VOID ModifyWndClassDx(WNDCLASSEX& wcx)
    {
        wcx.lpszMenuName = MAKEINTRESOURCE(1);
        wcx.hIcon = m_hIcon;
        wcx.hIconSm = m_hIconSm;
    }

    BOOL OnCreate(HWND hwnd, LPCREATESTRUCT lpCreateStruct)
    {
        SetCursorPos(0, 0);

        m_edt1 = CreateWindow(TEXT("EDIT"), NULL,
            WS_CHILD | WS_VISIBLE | WS_BORDER | ES_MULTILINE,
            0, 0, 100, 100, hwnd, (HMENU)edt1, m_hInst, NULL);

        m_ime = FindImeWindow(hwnd);
        // NOTE: We cannot access the IME UI window.

        printf("main:%p\n", (void *)m_hwnd);
        printf("m_edt1:%p\n", (void *)m_edt1);
        printf("m_ime:%p\n", (void *)m_ime);

        g_fnEditProcOld = SubclassWindow(m_edt1, EditWrapWindowProc);
        g_fnImeProcOld = SubclassWindow(m_ime, ImeWrapWindowProc);

        SetTimer(hwnd, 999, 2000, NULL);
        return TRUE;
    }

    void OnCommand(HWND hwnd, int id, HWND hwndCtl, UINT codeNotify)
    {
        switch (id)
        {
        case IDOK:
        case IDCANCEL:
            DestroyWindow(hwnd);
            break;
        }
    }

    void OnTimer(HWND hwnd, UINT id)
    {
        PostMessageDx(WM_COMMAND, IDOK);
    }

    void OnDestroy(HWND hwnd)
    {
        ::PostQuitMessage(0);
    }

    virtual LRESULT CALLBACK
    RealWindowProcDx(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
    {
        switch (uMsg)
        {
        HANDLE_MSG(hwnd, WM_CREATE, OnCreate);
        HANDLE_MSG(hwnd, WM_COMMAND, OnCommand);
        HANDLE_MSG(hwnd, WM_TIMER, OnTimer);
        HANDLE_MSG(hwnd, WM_DESTROY, OnDestroy);
        default:
            return DefaultProcDx();
        }
    }

    virtual LRESULT CALLBACK
    WindowProcDx(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
    {
        if (InSendMessage())
            g_prefix = TEXT("MMainWnd:S: ");
        else
            g_prefix = TEXT("MMainWnd:P: ");
        MD_msgdump(hwnd, uMsg, wParam, lParam);
        LRESULT lResult = RealWindowProcDx(hwnd, uMsg, wParam, lParam);
        g_prefix = TEXT("MMainWnd:R: ");
        MD_msgresult(hwnd, uMsg, wParam, lParam, lResult);
        return lResult;
    }

    BOOL StartDx(INT nCmdShow)
    {
        m_hIcon = LoadIconDx(1);
        m_hIconSm = LoadSmallIconDx(1);
        m_hAccel = ::LoadAccelerators(m_hInst, MAKEINTRESOURCE(1));

        if (!CreateWindowDx(NULL, TEXT("MyProject")))
        {
            MessageBoxA(NULL, "CreateWindowDx", NULL, MB_ICONERROR);
            return FALSE;
        }

        ShowWindow(m_hwnd, nCmdShow);
        UpdateWindow(m_hwnd);
        return TRUE;
    }

    INT RunDx()
    {
        // message loop
        MSG msg;
        while (::GetMessage(&msg, NULL, 0, 0))
        {
            if (::IsDialogMessage(m_hwnd, &msg))
                continue;

            if (::TranslateAccelerator(m_hwnd, m_hAccel, &msg))
                continue;

            ::TranslateMessage(&msg);
            ::DispatchMessage(&msg);
        }
        return INT(msg.wParam);
    }
};

//////////////////////////////////////////////////////////////////////////////
// Win32 main function

int main(int argc, char **argv)
{
    int ret = -1;

    {
        MMainWnd app(GetModuleHandle(NULL));

        ::InitCommonControls();

        if (app.StartDx(SW_SHOWNORMAL))
        {
            ret = app.RunDx();
        }
    }

#if (WINVER >= 0x0500)
    HANDLE hProcess = GetCurrentProcess();
    DebugPrintDx(TEXT("Count of GDI objects: %ld\n"),
                 GetGuiResources(hProcess, GR_GDIOBJECTS));
    DebugPrintDx(TEXT("Count of USER objects: %ld\n"),
                 GetGuiResources(hProcess, GR_USEROBJECTS));
#endif

#if defined(_MSC_VER) && !defined(NDEBUG)
    // for detecting memory leak (MSVC only)
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
#endif

    return ret;
}

//////////////////////////////////////////////////////////////////////////////
