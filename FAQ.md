# FAQ of IME/IMM

## What is IME?

IME is Input Method Editor, that is text conversion software for Asian Windows users.
IME allows the Asian users to input Asian text.

The Japanese user inputs the Hiragana text into IME (See REF014 and REF015) and converts into Kanji Katakana, or something text by IME.
Hiragana is a Japanese phonetic character collection.
The Kanji characters originate on the Chinese characters.

The Chinese user inputs the Kanji radicals into IME.
The Kanji radical is a component of the Chinese character (or a Kanji character).

The body of an IME is a DLL file that is registered as an IME in the operating system.
An IME can provide the following functions:

- ImeConfigure function
- ImeConversionList function
- ImeDestroy function
- ImeEnumRegisterWord function
- ImeEscape function
- ImeGetImeMenuItems function
- ImeGetRegisterWordStyle function
- ImeInquire function
- ImeProcessKey function
- ImeRegisterWord function
- ImeSelect function
- ImeSetActiveContext function
- ImeSetCompositionString function
- ImeToAsciiEx function
- ImeUnregisterWord function
- NotifyIME function

## What is IMM?

IMM is Input Method Manager  for Windows, that manages the user input and provides the interface between the user and an IME software.

## What is IMM32?

IMM32 is 32-bit IMM for Windows. That is a DLL file that is located in C:\Windows\system32 as the name of "imm32.dll".

IMM32 provides the following API functions:

- ImmAssociateContext function
- ImmAssociateContextEx function
- ImmConfigureIME function
- ImmCreateContext function
- ImmCreateIMCC function
- ImmCreateSoftKeyboard function
- ImmDestroyContext function
- ImmDestroyIMCC function
- ImmDestroySoftKeyboard function
- ImmDisableIME function
- ImmDisableLegacyIME function
- ImmEnumInputContext function
- ImmEnumRegisterWord function
- ImmEscape function
- ImmGenerateMessage function
- ImmGetCandidateList function
- ImmGetCandidateListCount function
- ImmGetCandidateWindow function
- ImmGetCompositionFont function
- ImmGetCompositionString function
- ImmGetCompositionWindow function
- ImmGetContext function
- ImmGetConversionList function
- ImmGetConversionStatus function
- ImmGetDefaultIMEWnd function
- ImmGetDescription function
- ImmGetGuideLine function
- ImmGetHotKey function
- ImmGetIMCCLockCount function
- ImmGetIMCCSize function
- ImmGetIMCLockCount function
- ImmGetIMEFileName function
- ImmGetImeMenuItems function
- ImmGetOpenStatus function
- ImmGetProperty function
- ImmGetRegisterWordStyle function
- ImmGetStatusWindowPos function
- ImmGetVirtualKey function
- ImmInstallIME function
- ImmIsIME function
- ImmIsUIMessage function
- ImmLockIMC function
- ImmLockIMCC function
- ImmNotifyIME function
- ImmRegisterWord function
- ImmReleaseContext function
- ImmRequestMessage function
- ImmReSizeIMCC function
- ImmSetCandidateWindow function
- ImmSetCompositionFont function
- ImmSetCompositionString function
- ImmSetCompositionWindow function
- ImmSetConversionStatus function
- ImmSetHotKey function
- ImmSetOpenStatus function
- ImmSetStatusWindowPos function
- ImmShowSoftKeyboard function
- ImmSimulateHotKey function
- ImmUnlockIMC function
- ImmUnlockIMCC function
- ImmUnregisterWord function

## How to use IMM32?

Just include <imm.h> and link to imm32.dll as follows:

```c
#include <windows.h>
#include <imm.h>
#pragma comment(lib, "imm32.lib")
```

## Where is free Japanese IME?

See REF013.

## What is "keyboard layout"?

See REF019.
