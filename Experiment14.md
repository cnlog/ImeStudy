# Experiment14

## Purpose

Inspect IME messages.

## Platform

Windows XP Japanese.

## Tools

- [tests/MsgDump](tests/MsgDump)

## Window Handles

- HWND 00110254, window class name "#32770"
- HWND 000D0244, window class name "Edit"
- HWND 000B0256, window class name "IME"

## Work

- Build [tests/MsgDump](tests/MsgDump).
- Execute "MyProject.exe > MsgDump-winxpjp.txt" from Command Prompt.

## The log

- MMainWnd:WM_INITDIALOG(hwnd:00110254, hwndFocus:001401F6, lParam:0022FEB0)
- main:00110254
- m_edt1:000d0244
- m_ime:000b0256
- IME:WM_WINDOWPOSCHANGING(hwnd:000B0256, lpwpos:0022FCCC)
- IME:WM_WINDOWPOSCHANGING: hwnd:000B0256, lResult:00000000
- MMainWnd:WM_WINDOWPOSCHANGING(hwnd:00110254, lpwpos:0022FCCC)
- IME:WM_WINDOWPOSCHANGED(hwnd:000B0256, lpwpos:0022FCCC)
- IME:WM_WINDOWPOSCHANGED: hwnd:000B0256, lResult:00000000
- IME:WM_ACTIVATEAPP(hwnd:000B0256, fActivate:1, dwThreadId:0x00000704)
- IME:WM_ACTIVATEAPP: hwnd:000B0256, lResult:00000000
- MMainWnd:WM_ACTIVATEAPP(hwnd:00110254, fActivate:1, dwThreadId:0x00000704)
- MMainWnd:WM_NCACTIVATE(hwnd:00110254, fActive:1, hwndActDeact:00000000, fMinimized:0)
- MMainWnd:WM_GETICON(hwnd:00110254, nType:2, dpi:00000000)
- MMainWnd:WM_GETICON(hwnd:00110254, nType:0, dpi:00000000)
- MMainWnd:WM_GETICON(hwnd:00110254, nType:1, dpi:00000000)
- MMainWnd:WM_ACTIVATE(hwnd:00110254, state:1, hwndActDeact:00000000, fMinimized:0)
- IME:WM_647(hwnd:000B0256, wParam:00000017, lParam:001401F6)
- IME:WM_IME_SETCONTEXT(hwnd:000B0256, fActive:1, dwShow:0xC000000F)
- IME:WM_IME_NOTIFY(hwnd:000B0256, wSubMessage:00000002, lParam:00000000)
- IME:WM_IME_NOTIFY: hwnd:000B0256, lResult:00000000
- IME:WM_IME_SETCONTEXT: hwnd:000B0256, lResult:00000000
- IME:WM_647(hwnd:000B0256, lResult:00000000)
- MMainWnd:WM_COMMAND(hwnd:00110254, id:1136, hwndCtl:001401F6, codeNotify:3)
- MMainWnd:WM_USER+0(hwnd:00110254, wParam:00000000, lParam:00000000)
- MMainWnd:WM_SHOWWINDOW(hwnd:00110254, fShow:1, status:0)
- MMainWnd:WM_WINDOWPOSCHANGING(hwnd:00110254, lpwpos:0022FE44)
- MMainWnd:WM_NCPAINT(hwnd:00110254, hrgn:00000001)
- MMainWnd:WM_GETICON(hwnd:00110254, nType:2, dpi:00000000)
- MMainWnd:WM_GETICON(hwnd:00110254, nType:0, dpi:00000000)
- MMainWnd:WM_GETICON(hwnd:00110254, nType:1, dpi:00000000)
- MMainWnd:WM_ERASEBKGND(hwnd:00110254, hdc:01010056)
- MMainWnd:WM_CTLCOLOR(hwnd:00110254, hdc:01010056, hwndChild:00110254, type:4)
- MMainWnd:WM_WINDOWPOSCHANGED(hwnd:00110254, lpwpos:0022FE44)
- MMainWnd:WM_GETICON(hwnd:00110254, nType:2, dpi:00000000)
- MMainWnd:WM_GETICON(hwnd:00110254, nType:0, dpi:00000000)
- MMainWnd:WM_GETICON(hwnd:00110254, nType:1, dpi:00000000)
- MMainWnd:WM_NCCALCSIZE(hwnd:00110254, fCalcValidRects:1, lpcsp:0022FA74)
- MMainWnd:WM_NCPAINT(hwnd:00110254, hrgn:00000001)
- MMainWnd:WM_GETICON(hwnd:00110254, nType:2, dpi:00000000)
- MMainWnd:WM_GETICON(hwnd:00110254, nType:0, dpi:00000000)
- MMainWnd:WM_GETICON(hwnd:00110254, nType:1, dpi:00000000)
- MMainWnd:WM_ERASEBKGND(hwnd:00110254, hdc:0101005A)
- MMainWnd:WM_CTLCOLOR(hwnd:00110254, hdc:0101005A, hwndChild:00110254, type:4)
- MMainWnd:WM_PAINT(hwnd:00110254)
- MMainWnd:WM_CTLCOLOR(hwnd:00110254, hdc:0101005A, hwndChild:001401F6, type:1)
- MMainWnd:WM_CTLCOLOR(hwnd:00110254, hdc:0101005A, hwndChild:001401F6, type:1)
- MMainWnd:WM_CTLCOLOR(hwnd:00110254, hdc:0101005A, hwndChild:0009028A, type:1)
- MMainWnd:WM_CTLCOLOR(hwnd:00110254, hdc:0101005A, hwndChild:0009028A, type:1)
- EDIT:WM_PAINT(hwnd:000D0244)
- EDIT:WM_NCPAINT(hwnd:000D0244, hrgn:00000001)
- EDIT:WM_NCPAINT: hwnd:000D0244, lResult:00000000
- EDIT:WM_ERASEBKGND(hwnd:000D0244, hdc:0101005A)
- MMainWnd:WM_CTLCOLOR(hwnd:00110254, hdc:0101005A, hwndChild:000D0244, type:1)
- MMainWnd:WM_ERASEBKGND: hwnd:000D0244, lResult:00000001
- MMainWnd:WM_CTLCOLOR(hwnd:00110254, hdc:0101005A, hwndChild:000D0244, type:1)
- MMainWnd:WM_PAINT: hwnd:000D0244, lResult:00000001
- MMainWnd:WM_CTLCOLOR(hwnd:00110254, hdc:0101005A, hwndChild:00090260, type:3)
- MMainWnd:WM_CTLCOLOR(hwnd:00110254, hdc:0101005A, hwndChild:0008026C, type:3)
- MMainWnd:WM_GETICON(hwnd:00110254, nType:2, dpi:00000000)
- MMainWnd:WM_GETICON(hwnd:00110254, nType:0, dpi:00000000)
- MMainWnd:WM_GETICON(hwnd:00110254, nType:1, dpi:00000000)
- MMainWnd:WM_TIMER(hwnd:00110254, id:999)
- MMainWnd:WM_COMMAND(hwnd:00110254, id:1, hwndCtl:00000000, codeNotify:0)
- MMainWnd:WM_WINDOWPOSCHANGING(hwnd:00110254, lpwpos:0022FB50)
- MMainWnd:WM_WINDOWPOSCHANGED(hwnd:00110254, lpwpos:0022FB50)
- MMainWnd:WM_NCACTIVATE(hwnd:00110254, fActive:0, hwndActDeact:00000000, fMinimized:0)
- MMainWnd:WM_GETICON(hwnd:00110254, nType:2, dpi:00000000)
- MMainWnd:WM_GETICON(hwnd:00110254, nType:0, dpi:00000000)
- MMainWnd:WM_GETICON(hwnd:00110254, nType:1, dpi:00000000)
- MMainWnd:WM_ACTIVATE(hwnd:00110254, state:0, hwndActDeact:00000000, fMinimized:0)
- EDIT:WM_GETDLGCODE(hwnd:000D0244, lpmsg:00000000)
- EDIT:WM_GETDLGCODE: hwnd:000D0244, lResult:0000008D
- IME:WM_ACTIVATEAPP(hwnd:000B0256, fActivate:0, dwThreadId:0x00000704)
- IME:WM_ACTIVATEAPP: hwnd:000B0256, lResult:00000000
- MMainWnd:WM_ACTIVATEAPP(hwnd:00110254, fActivate:0, dwThreadId:0x00000704)
- MMainWnd:WM_COMMAND(hwnd:00110254, id:1136, hwndCtl:001401F6, codeNotify:10)
- MMainWnd:WM_COMMAND(hwnd:00110254, id:1136, hwndCtl:001401F6, codeNotify:4)
- IME:WM_647(hwnd:000B0256, wParam:00000018, lParam:001401F6)
- IME:WM_IME_SETCONTEXT(hwnd:000B0256, fActive:0, dwShow:0xC000000F)
- IME:WM_IME_NOTIFY(hwnd:000B0256, wSubMessage:00000001, lParam:00000000)
- IME:WM_IME_NOTIFY: hwnd:000B0256, lResult:00000000
- IME:WM_IME_SETCONTEXT: hwnd:000B0256, lResult:00000000
- IME:WM_647(hwnd:000B0256, lResult:00000000)
- MMainWnd:WM_DESTROY(hwnd:00110254)
- EDIT:WM_DESTROY(hwnd:000D0244)
- EDIT:WM_DESTROY: hwnd:000D0244, lResult:00000000
- IME:WM_DESTROY(hwnd:000B0256)
- IME:WM_DESTROY: hwnd:000B0256, lResult:00000000
- IME:WM_NCDESTROY(hwnd:000B0256)
- IME:WM_NCDESTROY: hwnd:000B0256, lResult:00000000
- EDIT:WM_NCDESTROY(hwnd:000D0244)
- EDIT:WM_NCDESTROY: hwnd:000D0244, lResult:00000000
- MMainWnd:WM_NCDESTROY(hwnd:00110254)
