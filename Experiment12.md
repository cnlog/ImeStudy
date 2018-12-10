# Experiment12

## Purpose

Inspect IME messages.

## Platform

Windows 10.

## Tools

- [tests/MsgDump](tests/MsgDump)

## Window Handles

- HWND 002008B0, window class name "#32770"
- HWND 008B06FC, window class name "IME"
- HWND 007A08D6, window class name "Edit"

## Work

- Build [tests/MsgDump](tests/MsgDump).
- Execute "MsgDump.exe > MsgDump-w10.txt" from Command Prompt.

## The log

- MMainWnd:WM_INITDIALOG(hwnd:002008B0, hwndFocus:007C01B8, lParam:006FFE70)
- main:002008b0
- m_edt1:007a08d6
- m_ime:008b06fc
- IME:WM_WINDOWPOSCHANGING(hwnd:008B06FC, lpwpos:006FFC0C)
- IME:WM_WINDOWPOSCHANGING: hwnd:008B06FC, lResult:00000000
- MMainWnd:WM_WINDOWPOSCHANGING(hwnd:002008B0, lpwpos:006FFC0C)
- IME:WM_WINDOWPOSCHANGED(hwnd:008B06FC, lpwpos:006FFC0C)
- IME:WM_WINDOWPOSCHANGED: hwnd:008B06FC, lResult:00000000
- IME:WM_ACTIVATEAPP(hwnd:008B06FC, fActivate:1, dwThreadId:0x0000143C)
- IME:WM_ACTIVATEAPP: hwnd:008B06FC, lResult:00000000
- MMainWnd:WM_ACTIVATEAPP(hwnd:002008B0, fActivate:1, dwThreadId:0x0000143C)
- MMainWnd:WM_NCACTIVATE(hwnd:002008B0, fActive:1, hwndActDeact:00000000, fMinimized:0)
- MMainWnd:WM_GETICON(hwnd:002008B0, nType:2, dpi:00000000)
- MMainWnd:WM_GETICON(hwnd:002008B0, nType:0, dpi:00000000)
- MMainWnd:WM_GETICON(hwnd:002008B0, nType:1, dpi:00000000)
- MMainWnd:WM_ACTIVATE(hwnd:002008B0, state:1, hwndActDeact:00000000, fMinimized:0)
- IME:WM_647(hwnd:008B06FC, wParam:00000017, lParam:007C01B8)
- IME:WM_IME_SETCONTEXT(hwnd:008B06FC, fActive:1, dwShow:0xC000000F)
- IME:WM_IME_NOTIFY(hwnd:008B06FC, wSubMessage:00000002, lParam:00000000)
- IME:WM_IME_NOTIFY: hwnd:008B06FC, lResult:00000000
- IME:WM_IME_SETCONTEXT: hwnd:008B06FC, lResult:00000000
- IME:WM_647(hwnd:008B06FC, lResult:00000000)
- MMainWnd:WM_COMMAND(hwnd:002008B0, id:1136, hwndCtl:007C01B8, codeNotify:3)
- MMainWnd:WM_USER+0(hwnd:002008B0, wParam:00000000, lParam:00000000)
- MMainWnd:WM_CHANGEUISTATE(hwnd:002008B0, nAction:3, nUIElement:0)
- MMainWnd:WM_SHOWWINDOW(hwnd:002008B0, fShow:1, status:0)
- MMainWnd:WM_WINDOWPOSCHANGING(hwnd:002008B0, lpwpos:006FFE04)
- MMainWnd:WM_NCPAINT(hwnd:002008B0, hrgn:00000001)
- MMainWnd:WM_GETICON(hwnd:002008B0, nType:2, dpi:00000000)
- MMainWnd:WM_GETICON(hwnd:002008B0, nType:0, dpi:00000000)
- MMainWnd:WM_GETICON(hwnd:002008B0, nType:1, dpi:00000000)
- MMainWnd:WM_ERASEBKGND(hwnd:002008B0, hdc:81010FA2)
- MMainWnd:WM_CTLCOLOR(hwnd:002008B0, hdc:81010FA2, hwndChild:002008B0, type:4)
- MMainWnd:WM_WINDOWPOSCHANGED(hwnd:002008B0, lpwpos:006FFE04)
- MMainWnd:WM_GETICON(hwnd:002008B0, nType:2, dpi:00000000)
- MMainWnd:WM_GETICON(hwnd:002008B0, nType:0, dpi:00000000)
- MMainWnd:WM_GETICON(hwnd:002008B0, nType:1, dpi:00000000)
- MMainWnd:WM_PAINT(hwnd:002008B0)
- MMainWnd:WM_CTLCOLOR(hwnd:002008B0, hdc:81010FA2, hwndChild:007C01B8, type:1)
- MMainWnd:WM_CTLCOLOR(hwnd:002008B0, hdc:81010FA2, hwndChild:007C01B8, type:1)
- MMainWnd:WM_CTLCOLOR(hwnd:002008B0, hdc:81010FA2, hwndChild:00B70848, type:1)
- MMainWnd:WM_CTLCOLOR(hwnd:002008B0, hdc:81010FA2, hwndChild:00B70848, type:1)
- EDIT:WM_PAINT(hwnd:007A08D6)
- EDIT:WM_NCPAINT(hwnd:007A08D6, hrgn:00000001)
- EDIT:WM_NCPAINT: hwnd:007A08D6, lResult:00000000
- EDIT:WM_ERASEBKGND(hwnd:007A08D6, hdc:81010FA2)
- MMainWnd:WM_CTLCOLOR(hwnd:002008B0, hdc:81010FA2, hwndChild:007A08D6, type:1)
- MMainWnd:WM_ERASEBKGND: hwnd:007A08D6, lResult:00000001
- MMainWnd:WM_CTLCOLOR(hwnd:002008B0, hdc:81010FA2, hwndChild:007A08D6, type:1)
- MMainWnd:WM_PAINT: hwnd:007A08D6, lResult:00000001
- MMainWnd:WM_CTLCOLOR(hwnd:002008B0, hdc:81010FA2, hwndChild:005C0224, type:3)
- MMainWnd:WM_CTLCOLOR(hwnd:002008B0, hdc:81010FA2, hwndChild:005A05A8, type:3)
- MMainWnd:WM_GETICON(hwnd:002008B0, nType:1, dpi:00000060)
- MMainWnd:WM_799(hwnd:002008B0, wParam:00000001, lParam:00000000)
- MMainWnd:WM_GETICON(hwnd:002008B0, nType:2, dpi:00000060)
- MMainWnd:WM_GETICON(hwnd:002008B0, nType:0, dpi:00000060)
- MMainWnd:WM_49331(hwnd:002008B0, wParam:00000000, lParam:00000000)
- MMainWnd:WM_TIMER(hwnd:002008B0, id:999)
- MMainWnd:WM_COMMAND(hwnd:002008B0, id:1, hwndCtl:00000000, codeNotify:0)
- MMainWnd:WM_144(hwnd:002008B0, wParam:00000000, lParam:00000000)
- MMainWnd:WM_WINDOWPOSCHANGING(hwnd:002008B0, lpwpos:006FFA24)
- MMainWnd:WM_WINDOWPOSCHANGED(hwnd:002008B0, lpwpos:006FFA24)
- MMainWnd:WM_NCACTIVATE(hwnd:002008B0, fActive:0, hwndActDeact:00000000, fMinimized:0)
- MMainWnd:WM_GETICON(hwnd:002008B0, nType:2, dpi:00000000)
- MMainWnd:WM_GETICON(hwnd:002008B0, nType:0, dpi:00000000)
- MMainWnd:WM_GETICON(hwnd:002008B0, nType:1, dpi:00000000)
- MMainWnd:WM_ACTIVATE(hwnd:002008B0, state:0, hwndActDeact:00000000, fMinimized:0)
- EDIT:WM_GETDLGCODE(hwnd:007A08D6, lpmsg:00000000)
- EDIT:WM_GETDLGCODE: hwnd:007A08D6, lResult:0000008D
- IME:WM_ACTIVATEAPP(hwnd:008B06FC, fActivate:0, dwThreadId:0x0000143C)
- IME:WM_ACTIVATEAPP: hwnd:008B06FC, lResult:00000000
- MMainWnd:WM_ACTIVATEAPP(hwnd:002008B0, fActivate:0, dwThreadId:0x0000143C)
- MMainWnd:WM_COMMAND(hwnd:002008B0, id:1136, hwndCtl:007C01B8, codeNotify:10)
- MMainWnd:WM_COMMAND(hwnd:002008B0, id:1136, hwndCtl:007C01B8, codeNotify:4)
- IME:WM_647(hwnd:008B06FC, wParam:00000018, lParam:007C01B8)
- IME:WM_IME_SETCONTEXT(hwnd:008B06FC, fActive:0, dwShow:0xC000000F)
- IME:WM_IME_NOTIFY(hwnd:008B06FC, wSubMessage:00000001, lParam:00000000)
- IME:WM_IME_NOTIFY: hwnd:008B06FC, lResult:00000000
- IME:WM_IME_SETCONTEXT: hwnd:008B06FC, lResult:00000000
- IME:WM_647(hwnd:008B06FC, lResult:00000000)
- MMainWnd:WM_DESTROY(hwnd:002008B0)
- EDIT:WM_DESTROY(hwnd:007A08D6)
- EDIT:WM_DESTROY: hwnd:007A08D6, lResult:00000000
- IME:WM_144(hwnd:008B06FC, wParam:00000000, lParam:00000000)
- IME:WM_144(hwnd:008B06FC, lResult:00000000)
- IME:WM_DESTROY(hwnd:008B06FC)
- IME:WM_DESTROY: hwnd:008B06FC, lResult:00000000
- IME:WM_NCDESTROY(hwnd:008B06FC)
- IME:WM_NCDESTROY: hwnd:008B06FC, lResult:00000000
- EDIT:WM_NCDESTROY(hwnd:007A08D6)
- EDIT:WM_NCDESTROY: hwnd:007A08D6, lResult:00000000
- MMainWnd:WM_NCDESTROY(hwnd:002008B0)
