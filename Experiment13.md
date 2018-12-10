# Experiment13

## Purpose

Inspect IME messages.

## Platform

Windows 2003.

## Tools

- [tests/MsgDump](tests/MsgDump)

## Window Handles

- HWND 000F00B6, window class name "#32770"
- HWND 001200D6, window class name "Edit"
- HWND 0014011A, window class name "IME"

## Work

- Build [tests/MsgDump](tests/MsgDump).
- Execute "MyProject.exe > MsgDump-w2k3.txt" from Command Prompt.

## The log

- MMainWnd:WM_INITDIALOG(hwnd:000F00B6, hwndFocus:001000B0, lParam:0022FEB0)
- main:000f00b6
- m_edt1:001200d6
- m_ime:0014011a
- IME:WM_WINDOWPOSCHANGING(hwnd:0014011A, lpwpos:0022FCCC)
- IME:WM_WINDOWPOSCHANGING: hwnd:0014011A, lResult:00000000
- MMainWnd:WM_WINDOWPOSCHANGING(hwnd:000F00B6, lpwpos:0022FCCC)
- IME:WM_WINDOWPOSCHANGED(hwnd:0014011A, lpwpos:0022FCCC)
- IME:WM_WINDOWPOSCHANGED: hwnd:0014011A, lResult:00000000
- IME:WM_ACTIVATEAPP(hwnd:0014011A, fActivate:1, dwThreadId:0x00000B60)
- IME:WM_ACTIVATEAPP: hwnd:0014011A, lResult:00000000
- MMainWnd:WM_ACTIVATEAPP(hwnd:000F00B6, fActivate:1, dwThreadId:0x00000B60)
- MMainWnd:WM_NCACTIVATE(hwnd:000F00B6, fActive:1, hwndActDeact:00000000, fMinimized:0)
- MMainWnd:WM_ACTIVATE(hwnd:000F00B6, state:1, hwndActDeact:00000000, fMinimized:0)
- IME:WM_647(hwnd:0014011A, wParam:00000017, lParam:001000B0)
- IME:WM_IME_SETCONTEXT(hwnd:0014011A, fActive:1, dwShow:0xC000000F)
- IME:WM_IME_NOTIFY(hwnd:0014011A, wSubMessage:00000002, lParam:00000000)
- IME:WM_IME_NOTIFY: hwnd:0014011A, lResult:00000000
- IME:WM_IME_SETCONTEXT: hwnd:0014011A, lResult:00000000
- IME:WM_647(hwnd:0014011A, lResult:00000000)
- MMainWnd:WM_COMMAND(hwnd:000F00B6, id:1136, hwndCtl:001000B0, codeNotify:3)
- MMainWnd:WM_USER+0(hwnd:000F00B6, wParam:00000000, lParam:00000000)
- MMainWnd:WM_SHOWWINDOW(hwnd:000F00B6, fShow:1, status:0)
- MMainWnd:WM_WINDOWPOSCHANGING(hwnd:000F00B6, lpwpos:0022FE44)
- MMainWnd:WM_NCPAINT(hwnd:000F00B6, hrgn:00000001)
- MMainWnd:WM_GETTEXT(hwnd:000F00B6, cchTextMax:510, lpszText:0022F530)
- MMainWnd:WM_ERASEBKGND(hwnd:000F00B6, hdc:01010055)
- MMainWnd:WM_CTLCOLOR(hwnd:000F00B6, hdc:01010055, hwndChild:000F00B6, type:4)
- MMainWnd:WM_WINDOWPOSCHANGED(hwnd:000F00B6, lpwpos:0022FE44)
- MMainWnd:WM_PAINT(hwnd:000F00B6)
- MMainWnd:WM_CTLCOLOR(hwnd:000F00B6, hdc:01010055, hwndChild:001000B0, type:1)
- MMainWnd:WM_CTLCOLOR(hwnd:000F00B6, hdc:01010055, hwndChild:001000B0, type:1)
- MMainWnd:WM_CTLCOLOR(hwnd:000F00B6, hdc:01010055, hwndChild:001300F0, type:1)
- MMainWnd:WM_CTLCOLOR(hwnd:000F00B6, hdc:01010055, hwndChild:001300F0, type:1)
- EDIT:WM_PAINT(hwnd:001200D6)
- EDIT:WM_NCPAINT(hwnd:001200D6, hrgn:00000001)
- EDIT:WM_NCPAINT: hwnd:001200D6, lResult:00000000
- EDIT:WM_ERASEBKGND(hwnd:001200D6, hdc:01010055)
- MMainWnd:WM_CTLCOLOR(hwnd:000F00B6, hdc:01010055, hwndChild:001200D6, type:1)
- MMainWnd:WM_ERASEBKGND: hwnd:001200D6, lResult:00000001
- MMainWnd:WM_CTLCOLOR(hwnd:000F00B6, hdc:01010055, hwndChild:001200D6, type:1)
- MMainWnd:WM_PAINT: hwnd:001200D6, lResult:00000001
- MMainWnd:WM_CTLCOLOR(hwnd:000F00B6, hdc:01010055, hwndChild:0010012A, type:3)
- MMainWnd:WM_CTLCOLOR(hwnd:000F00B6, hdc:01010055, hwndChild:000D010E, type:3)
- MMainWnd:WM_GETICON(hwnd:000F00B6, nType:2, dpi:00000000)
- MMainWnd:WM_GETICON(hwnd:000F00B6, nType:0, dpi:00000000)
- MMainWnd:WM_GETICON(hwnd:000F00B6, nType:1, dpi:00000000)
- MMainWnd:WM_TIMER(hwnd:000F00B6, id:999)
- MMainWnd:WM_COMMAND(hwnd:000F00B6, id:1, hwndCtl:00000000, codeNotify:0)
- MMainWnd:WM_WINDOWPOSCHANGING(hwnd:000F00B6, lpwpos:0022FB28)
- MMainWnd:WM_WINDOWPOSCHANGED(hwnd:000F00B6, lpwpos:0022FB28)
- MMainWnd:WM_NCACTIVATE(hwnd:000F00B6, fActive:0, hwndActDeact:00000000, fMinimized:0)
- MMainWnd:WM_ACTIVATE(hwnd:000F00B6, state:0, hwndActDeact:00000000, fMinimized:0)
- EDIT:WM_GETDLGCODE(hwnd:001200D6, lpmsg:00000000)
- EDIT:WM_GETDLGCODE: hwnd:001200D6, lResult:0000008D
- IME:WM_ACTIVATEAPP(hwnd:0014011A, fActivate:0, dwThreadId:0x00000B60)
- IME:WM_ACTIVATEAPP: hwnd:0014011A, lResult:00000000
- MMainWnd:WM_ACTIVATEAPP(hwnd:000F00B6, fActivate:0, dwThreadId:0x00000B60)
- MMainWnd:WM_COMMAND(hwnd:000F00B6, id:1136, hwndCtl:001000B0, codeNotify:10)
- MMainWnd:WM_COMMAND(hwnd:000F00B6, id:1136, hwndCtl:001000B0, codeNotify:4)
- IME:WM_647(hwnd:0014011A, wParam:00000018, lParam:001000B0)
- IME:WM_IME_SETCONTEXT(hwnd:0014011A, fActive:0, dwShow:0xC000000F)
- IME:WM_IME_NOTIFY(hwnd:0014011A, wSubMessage:00000001, lParam:00000000)
- IME:WM_IME_NOTIFY: hwnd:0014011A, lResult:00000000
- IME:WM_IME_SETCONTEXT: hwnd:0014011A, lResult:00000000
- IME:WM_647(hwnd:0014011A, lResult:00000000)
- MMainWnd:WM_DESTROY(hwnd:000F00B6)
- EDIT:WM_DESTROY(hwnd:001200D6)
- EDIT:WM_DESTROY: hwnd:001200D6, lResult:00000000
- IME:WM_DESTROY(hwnd:0014011A)
- IME:WM_DESTROY: hwnd:0014011A, lResult:00000000
- IME:WM_NCDESTROY(hwnd:0014011A)
- IME:WM_NCDESTROY: hwnd:0014011A, lResult:00000000
- EDIT:WM_NCDESTROY(hwnd:001200D6)
- EDIT:WM_NCDESTROY: hwnd:001200D6, lResult:00000000
- MMainWnd:WM_NCDESTROY(hwnd:000F00B6)
