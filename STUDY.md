# IME/IMM Study

## What are the window classes being used for IME support?

### Windows 10

- CONFIRMED: There is the IME window class whose window class name is `"IME"`.
- CONFIRMED: There is the IME UI window class whose window class name is `"MSCTFIME UI"`.

See also:
[images/win10/IME-class-6.png](images/win10/IME-class-6.png).

### Windows 2003

- CONFIRMED: There is the IME window class whose window class name is `"IME"`.
- CONFIRMED: There is the IME UI window class whose window class name is `"MSCTFIME UI"`.

See also:
[images/win2k3/IME-class-6.png](images/win2k3/IME-class-6.png).

### Windows XP Japanese

- CONFIRMED: There is the IME window class whose window class name is `"IME"`.
- CONFIRMED: There is the IME UI window class whose window class name is `"imejpstmain81"`.

See also:
[images/winxpjp/IME-class-6.png](images/winxpjp/IME-class-6.png).

### Windows 2000 Japanese

- CONFIRMED: There is the IME window class whose window class name is `"IME"`.
- CONFIRMED: There is the IME UI window class whose window class name is `"msime98main"`.

See also:
[images/win2kjp/IME-class-1.png](images/win2kjp/IME-class-1.png).

## What is `"IME"` window class?

### Windows 10

- CONFIRMED: It has the window class name of `"IME"`.
- CONFIRMED: It has WS_POPUP | WS_DISABLED | WS_CLIPSIBLINGS window styles.
- CONFIRMED: It has zero extended styles.
- CONFIRMED: It has zero class styles.
- CONFIRMED: It has the window text of `"Default IME"`.
- CONFIRMED: The process ID of the `IME` window is same as the process ID of the application.
- CONFIRMED: The the thread ID of the `IME` window is same as the thread ID of the application.

See also:
[images/win10/IME-class-1.png](images/win10/IME-class-1.png),
[images/win10/IME-class-2.png](images/win10/IME-class-2.png),
[images/win10/IME-class-3.png](images/win10/IME-class-3.png),
[images/win10/IME-class-4.png](images/win10/IME-class-4.png),
[images/win10/IME-class-5.png](images/win10/IME-class-5.png).

### Windows 2003

- CONFIRMED: It has the window class name of `"IME"`.
- CONFIRMED: It has WS_POPUP | WS_DISABLED | WS_CLIPSIBLINGS window styles.
- CONFIRMED: It has zero extended styles.
- CONFIRMED: It has zero class styles.
- CONFIRMED: It has the window text of `"Default IME"`.
- CONFIRMED: The process ID of the `IME` window is same as the process ID of the application.
- CONFIRMED: The the thread ID of the `IME` window is same as the thread ID of the application.

See also:
[images/win2k3/IME-class-1.png](images/win2k3/IME-class-1.png),
[images/win2k3/IME-class-2.png](images/win2k3/IME-class-2.png),
[images/win2k3/IME-class-3.png](images/win2k3/IME-class-3.png),
[images/win2k3/IME-class-4.png](images/win2k3/IME-class-4.png),
[images/win2k3/IME-class-5.png](images/win2k3/IME-class-5.png).

### Windows XP Japanese

- CONFIRMED: It has the window class name of `"IME"`.
- CONFIRMED: It has WS_POPUP | WS_DISABLED | WS_CLIPSIBLINGS window styles.
- CONFIRMED: It has zero extended styles.
- CONFIRMED: It has zero class styles.
- CONFIRMED: It has the window text of `"Default IME"`.
- CONFIRMED: The process ID of the `IME` window is same as the process ID of the application.
- CONFIRMED: The the thread ID of the `IME` window is same as the thread ID of the application.

See also:
[images/winxpjp/IME-class-1.png](images/winxpjp/IME-class-1.png),
[images/winxpjp/IME-class-2.png](images/winxpjp/IME-class-2.png),
[images/winxpjp/IME-class-3.png](images/winxpjp/IME-class-3.png),
[images/winxpjp/IME-class-4.png](images/winxpjp/IME-class-4.png),
[images/winxpjp/IME-class-5.png](images/winxpjp/IME-class-5.png).

### Windows 2000 Japanese

- CONFIRMED: It has the window class name of `"IME"`.
- CONFIRMED: It has WS_POPUP | WS_DISABLED | WS_CLIPSIBLINGS window styles.
- CONFIRMED: It has zero extended styles.
- CONFIRMED: It has zero class styles.
- CONFIRMED: It has the window text of `"Default IME"`.
- CONFIRMED: The process ID of the `IME` window is same as the process ID of the application.
- CONFIRMED: The the thread ID of the `IME` window is same as the thread ID of the application.

See also:
[images/win2kjp/IME-class-1.png](images/win2kjp/IME-class-1.png),
[images/win2kjp/IME-class-2.png](images/win2kjp/IME-class-2.png),
[images/win2kjp/IME-class-3.png](images/win2kjp/IME-class-3.png),
[images/win2kjp/IME-class-4.png](images/win2kjp/IME-class-4.png),
[images/win2kjp/IME-class-5.png](images/win2kjp/IME-class-5.png).

## What is the IME UI window?

### Windows 10

- CONFIRMED: Its window class is `"MSCTFIME UI"`.
- CONFIRMED: It has WS_POPUP | WS_DISABLED | WS_CLIPSIBLINGS window styles.
- CONFIRMED: It has zero extended styles.
- CONFIRMED: It has CS_IME and CS_GLOBALCLASS class styles.
- CONFIRMED: It has the window text of `"MSCTFIME UI"`.
- CONFIRMED: The process ID of it is same as the process ID of the application.
- CONFIRMED: The thread ID of it is same as the thread ID of the application.

See also:
[images/win10/IME-UI-1.png](images/win10/IME-UI-1.png),
[images/win10/IME-UI-2.png](images/win10/IME-UI-2.png),
[images/win10/IME-UI-3.png](images/win10/IME-UI-3.png),
[images/win10/IME-UI-4.png](images/win10/IME-UI-4.png),
[images/win10/IME-UI-5.png](images/win10/IME-UI-5.png).

### Windows 2003

- CONFIRMED: Its window class is `"MSCTFIME UI"`.
- CONFIRMED: It has WS_POPUP | WS_DISABLED | WS_CLIPSIBLINGS window styles.
- CONFIRMED: It has zero extended styles.
- CONFIRMED: It has CS_IME and CS_GLOBALCLASS class styles.
- CONFIRMED: It has the window text of `"M????"`.
- CONFIRMED: The process ID of it is same as the process ID of the application.
- CONFIRMED: The thread ID of it is same as the thread ID of the application.

See also:
[images/win2k3/IME-UI-1.png](images/win2k3/IME-UI-1.png),
[images/win2k3/IME-UI-2.png](images/win2k3/IME-UI-2.png),
[images/win2k3/IME-UI-3.png](images/win2k3/IME-UI-3.png),
[images/win2k3/IME-UI-4.png](images/win2k3/IME-UI-4.png),
[images/win2k3/IME-UI-5.png](images/win2k3/IME-UI-5.png).

### Windows XP Japanese

- CONFIRMED: Its window class is `"imejpstmain81"`.
- CONFIRMED: It has WS_POPUP | WS_DISABLED | WS_CLIPSIBLINGS window styles.
- CONFIRMED: It has zero extended styles.
- CONFIRMED: It has CS_IME | CS_HREDRAW | CS_VREDRAW class styles.
- CONFIRMED: It has the window text of `"imejpstmain81"`.
- CONFIRMED: The process ID of it is same as the process ID of the application.
- CONFIRMED: The thread ID of it is same as the thread ID of the application.

See also:
[images/winxpjp/IME-UI-1.png](images/winxpjp/IME-UI-1.png),
[images/winxpjp/IME-UI-2.png](images/winxpjp/IME-UI-2.png),
[images/winxpjp/IME-UI-3.png](images/winxpjp/IME-UI-3.png),
[images/winxpjp/IME-UI-4.png](images/winxpjp/IME-UI-4.png),
[images/winxpjp/IME-UI-5.png](images/winxpjp/IME-UI-5.png).

### Windows 2000 Japanese

- CONFIRMED: Its window class is `"msime98main"`.
- CONFIRMED: It has WS_POPUP | WS_DISABLED | WS_CLIPSIBLINGS window styles.
- CONFIRMED: It has zero extended styles.
- CONFIRMED: It has CS_IME | CS_HREDRAW | CS_VREDRAW class styles.
- CONFIRMED: It has the window text of `"msime98main"`.
- CONFIRMED: The process ID of it is same as the process ID of the application.
- CONFIRMED: The thread ID of it is same as the thread ID of the application.

See also:
[images/win2kjp/IME-UI-1.png](images/win2kjp/IME-UI-1.png),
[images/win2kjp/IME-UI-2.png](images/win2kjp/IME-UI-2.png),
[images/win2kjp/IME-UI-3.png](images/win2kjp/IME-UI-3.png),
[images/win2kjp/IME-UI-4.png](images/win2kjp/IME-UI-4.png),
[images/win2kjp/IME-UI-5.png](images/win2kjp/IME-UI-5.png).

## How is the window hierarchy?

### Windows 10

- CONFIRMED: The GUI application has only one `"IME"` class window.
- CONFIRMED: The foreground window of the application owns an `"IME"` class window.
- CONFIRMED: If the focus was moved, then the application's `"IME"` window will be also moved.
- CONFIRMED: The `"IME"` class window owns the `"MSCTFIME UI"` class window.

See also:
[images/win10/IME-class-6.png](images/win10/IME-class-6.png),
[images/win10/IME-class-7.png](images/win10/IME-class-7.png).

### Windows 2003

- CONFIRMED: The GUI application has only one `"IME"` class window.
- CONFIRMED: The foreground window of the application owns an `"IME"` class window.
- CONFIRMED: If the focus was moved, then the application's `"IME"` window will be also moved.
- CONFIRMED: The `"IME"` class window owns the `"MSCTFIME UI"` class window.

See also:
[images/win2k3/IME-class-6.png](images/win2k3/IME-class-6.png),
[images/win2k3/IME-class-7.png](images/win2k3/IME-class-7.png).

### Windows XP Japanese

- CONFIRMED: The GUI application has only one `"IME"` class window.
- CONFIRMED: The foreground window of the application owns an `"IME"` class window.
- CONFIRMED: If the focus was moved, then the application's `"IME"` window will be also moved.
- CONFIRMED: The `"IME"` class window owns the `"imejpstmain81"` class window.

See also:
[images/winxpjp/IME-class-6.png](images/winxpjp/IME-class-6.png),
[images/winxpjp/IME-class-7.png](images/winxpjp/IME-class-7.png).

### Windows 2000 Japanese

- CONFIRMED: The GUI application has only one `"IME"` class window.
- NOT CONFIRMED: The foreground window of the application owns an `"IME"` class window.
- NOT CONFIRMED: If the focus was moved, then the application's `"IME"` window will be also moved.
- CONFIRMED: The `"IME"` class window owns the `"msime98main"` class window.

## What does an IME installer?

It copys the IME-related files into the system, writes some settings in the registry, and call the `ImmInstallIME` function.

## What does `DefWindowProc` for IME support?

## The list of IMM functions?

- ImmAssociateContext
- ImmAssociateContextEx
- ImmConfigureIME
- ImmCreateContext
- ImmCreateIMCC
- ImmCreateSoftKeyboard
- ImmDestroyContext
- ImmDestroyIMCC
- ImmDestroySoftKeyboard
- ImmDisableIME
- ImmDisableLegacyIME
- ImmDisableTextFrameService
- ImmEnumInputContext
- ImmEnumRegisterWord
- ImmEscape
- ImmGenerateMessage
- ImmGetCandidateList
- ImmGetCandidateListCount
- ImmGetCandidateWindow
- ImmGetCompositionFont
- ImmGetCompositionString
- ImmGetCompositionWindow
- ImmGetContext
- ImmGetConversionList
- ImmGetConversionStatus
- ImmGetDefaultIMEWnd
- ImmGetDescription
- ImmGetGuideLine
- ImmGetHotKey
- ImmGetIMCCLockCount
- ImmGetIMCCSize
- ImmGetIMCLockCount
- ImmGetIMEFileName
- ImmGetImeMenuItems
- ImmGetOpenStatus
- ImmGetProperty
- ImmGetRegisterWordStyle
- ImmGetStatusWindowPos
- ImmGetVirtualKey
- ImmInstallIME
- ImmIsIME
- ImmIsUIMessage
- ImmLockIMC
- ImmLockIMCC
- ImmNotifyIME
- ImmRegisterWord
- ImmReleaseContext
- ImmRequestMessage
- ImmReSizeIMCC
- ImmSetCandidateWindow
- ImmSetCompositionFont
- ImmSetCompositionString
- ImmSetCompositionWindow
- ImmSetConversionStatus
- ImmSetHotKey
- ImmSetOpenStatus
- ImmSetStatusWindowPos
- ImmShowSoftKeyboard
- ImmSimulateHotKey
- ImmUnlockIMC
- ImmUnlockIMCC
- ImmUnregisterWord

## The list of IME functions?

- ImeConfigure
- ImeConversionList
- ImeDestroy
- ImeEnumRegisterWord
- ImeEscape
- ImeGetImeMenuItems
- ImeGetRegisterWordStyle
- ImeInquire
- ImeProcessKey
- ImeRegisterWord
- ImeSelect
- ImeSetActiveContext
- ImeSetCompositionString
- ImeToAsciiEx
- ImeUnregisterWord
- NotifyIME

## The list of standard IME messages?

- WM_IME_STARTCOMPOSITION
- WM_IME_ENDCOMPOSITION
- WM_IME_COMPOSITION
- WM_IME_SETCONTEXT
- WM_IME_NOTIFY
- WM_IME_CONTROL
- WM_IME_COMPOSITIONFULL
- WM_IME_SELECT
- WM_IME_CHAR
- WM_IME_REQUEST
- WM_IME_KEYDOWN
- WM_IME_KEYUP

## What is trigger of WM_IME_STARTCOMPOSITION?
## What is trigger of WM_IME_ENDCOMPOSITION?
## What is trigger of WM_IME_COMPOSITION?
## What is trigger of WM_IME_SETCONTEXT?
## What is trigger of WM_IME_NOTIFY?
## What is trigger of WM_IME_CONTROL?
## What is trigger of WM_IME_COMPOSITIONFULL?
## What is trigger of WM_IME_SELECT?
## What is trigger of WM_IME_CHAR?
## What is trigger of WM_IME_REQUEST?
## What is trigger of WM_IME_KEYDOWN?
## What is trigger of WM_IME_KEYUP?

## What is trigger of ImeConfigure?
## What is trigger of ImeConversionList?
## What is trigger of ImeDestroy?
## What is trigger of ImeEnumRegisterWord?
## What is trigger of ImeEscape?
## What is trigger of ImeGetImeMenuItems?
## What is trigger of ImeGetRegisterWordStyle?
## What is trigger of ImeInquire?
## What is trigger of ImeProcessKey?
## What is trigger of ImeRegisterWord?
## What is trigger of ImeSelect?
## What is trigger of ImeSetActiveContext?
## What is trigger of ImeSetCompositionString?
## What is trigger of ImeToAsciiEx?
## What is trigger of ImeUnregisterWord?
## What is trigger of NotifyIME?

## What is `imetip.dll`?

`imetip.dll` is a DLL file that is part of Microsoft IME TIP.

- Windows 10 has `imetip.dll` in `C:\Windows\WinSxS\wow64_microsoft-windows-d..me-eashared-coretip_31bf3856ad364e35_10.0.17134.1_none_69cbc7d426615b1b`.

## What is `imjptip.dll`?

`imjptip.dll` is a DLL file that is part of Japanese Microsoft IME TIP.

- Windows 10 has `imjptip.dll` in `C:\Windows\System32\IME\IMEJP`.

## What is `MSCTF.dll`?

`MSCTF.dll` is a DLL file that is the core runtime library of Text Services Framework (TSF).

- Windows 10 has `MSCTF.dll` in `C:\Windows\system32`.