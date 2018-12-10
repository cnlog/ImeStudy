// MyProject.cpp

#include "targetver.h"
#include "MWindowBase.hpp"

struct MESSAGE_ENTRY
{
    LPCTSTR Name;
    UINT uMsg;
    WPARAM wParam;
    LPARAM lParam;
};

MESSAGE_ENTRY g_entries[] =
{
    { TEXT("WM_IME_STARTCOMPOSITION"), WM_IME_STARTCOMPOSITION, 0, 0 },
    { TEXT("WM_IME_ENDCOMPOSITION"), WM_IME_ENDCOMPOSITION, 0, 0 },
    { TEXT("WM_IME_COMPOSITION"), WM_IME_COMPOSITION, 0, 0 },
    { TEXT("WM_IME_SETCONTEXT"), WM_IME_SETCONTEXT, 0, 0 },
    { TEXT("WM_IME_NOTIFY"), WM_IME_NOTIFY, 0, 0 },
    { TEXT("WM_IME_CONTROL"), WM_IME_CONTROL, 0, 0 },
    { TEXT("WM_IME_COMPOSITIONFULL"), WM_IME_COMPOSITIONFULL, 0, 0 },
    { TEXT("WM_IME_SELECT"), WM_IME_SELECT, 0, 0 },
    { TEXT("WM_IME_CHAR"), WM_IME_CHAR, 0, 0 },
    { TEXT("WM_IME_REQUEST"), WM_IME_REQUEST, 0, 0 },
    { TEXT("WM_IME_KEYDOWN"), WM_IME_KEYDOWN, 0, 0 },
    { TEXT("WM_IME_KEYUP"), WM_IME_KEYUP, 0, 0 },
};

class MMainWnd : public MDialogBase
{
public:
    INT         m_argc;         // number of command line parameters
    TCHAR **    m_targv;        // command line parameters
    HINSTANCE   m_hInst;        // the instance handle
    HICON       m_hIcon;        // the main icon
    HICON       m_hIconSm;      // the small icon
    HACCEL      m_hAccel;       // the access keys

    MMainWnd(INT argc, TCHAR **targv, HINSTANCE hInst)
        : MDialogBase(1), m_argc(argc), m_targv(targv), m_hInst(hInst),
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

    BOOL OnInitDialog(HWND hwnd, HWND hwndFocus, LPARAM lParam)
    {
        HWND hCmb1 = GetDlgItem(hwnd, cmb1);
        for (size_t i = 0; i < ARRAYSIZE(g_entries); ++i)
        {
            ComboBox_AddString(hCmb1, g_entries[i].Name);
        }
        ComboBox_SetCurSel(hCmb1, 0);

        HWND hCmb2 = GetDlgItem(hwnd, cmb2);
        ComboBox_AddString(hCmb2, TEXT("Main Window"));
        ComboBox_AddString(hCmb2, TEXT("EDIT"));
        ComboBox_AddString(hCmb2, TEXT("BUTTON"));
        ComboBox_SetCurSel(hCmb2, 0);
        return 0;
    }

    void OnOK(HWND hwnd)
    {
        TCHAR szText[64];
        HWND hCmb1 = GetDlgItem(hwnd, cmb1);
        ComboBox_GetText(hCmb1, szText, ARRAYSIZE(szText));

        HWND hCmb2 = GetDlgItem(hwnd, cmb2);
        INT k = ComboBox_GetCurSel(hCmb2);

        for (size_t i = 0; i < ARRAYSIZE(g_entries); ++i)
        {
            auto& entry = g_entries[i];
            if (lstrcmpi(szText, entry.Name) == 0)
            {
                switch (k)
                {
                case 0:
                    SendMessage(m_hwnd, entry.uMsg, entry.wParam, entry.lParam);
                    break;
                case 1:
                    SendDlgItemMessage(m_hwnd, edt1, entry.uMsg, entry.wParam, entry.lParam);
                    break;
                case 2:
                    SendDlgItemMessage(m_hwnd, IDOK, entry.uMsg, entry.wParam, entry.lParam);
                    break;
                }
                break;
            }
        }
    }

    void OnCommand(HWND hwnd, int id, HWND hwndCtl, UINT codeNotify)
    {
        switch (id)
        {
        case IDOK:
            OnOK(hwnd);
            break;
        case IDCANCEL:
            DestroyWindow(hwnd);
            break;
        }
    }

    void OnDestroy(HWND hwnd)
    {
        ::PostQuitMessage(0);
    }

    virtual INT_PTR CALLBACK
    DialogProcDx(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
    {
        switch (uMsg)
        {
        HANDLE_MSG(hwnd, WM_INITDIALOG, OnInitDialog);
        HANDLE_MSG(hwnd, WM_COMMAND, OnCommand);
        HANDLE_MSG(hwnd, WM_DESTROY, OnDestroy);
        default:
            return DefaultProcDx();
        }
    }

    BOOL StartDx(INT nCmdShow)
    {
        m_hIcon = LoadIconDx(1);
        m_hIconSm = LoadSmallIconDx(1);
        m_hAccel = ::LoadAccelerators(m_hInst, MAKEINTRESOURCE(1));

        if (CreateDialogDx(NULL))
        {
            ShowWindow(m_hwnd, nCmdShow);
            UpdateWindow(m_hwnd);
            return TRUE;
        }

        return FALSE;
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

extern "C"
INT APIENTRY _tWinMain(
    HINSTANCE   hInstance,
    HINSTANCE   hPrevInstance,
    LPTSTR      lpCmdLine,
    INT         nCmdShow)
{
    int ret = -1;

    {
        MMainWnd app(__argc, __targv, hInstance);

        ::InitCommonControls();

        if (app.StartDx(nCmdShow))
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
