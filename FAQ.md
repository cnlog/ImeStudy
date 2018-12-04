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

IMM32 provides API functions whose names begin with "Imm". For more details, see IME Hackerz (REF011 and REF012).

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

The key code system differs depending on the keyboard or the keyboard language.
The position of the physical key may change.
Also, the key code mapping may change.

Usually, Japanese people uses Japanese keyboards.
Usually, Chinese people uses Chinese keyboards.
Usually, Korean people uses Korean keyboards.
Japanese user doesn't want to use English keyboard to input Japanese text.

## What is Zenkaku or Hankaku character?

A Hankaku character is a single-byte character.
A non-Hankaku character is a Zenkaku character.
Traditionally, a non-single-byte character (in Shift_JIS encoding) has double width of a Hankaku character.
A Japanese fixed-width font should follow this traditional rule.

## How is the Japanese keyboard?

The current Japanese keyboard standard is 109-keyboard.
It can type English alphabet and Hiragana characters, and some Japanese symbols and punctuations.
Additionally it has the VK_KANJI, VK_KANA, VK_CONVERT, and VK_NONCONVERT virtual keys.

- VK_KANJI is Hankaku/Zenkaku key to toggle Hankaku input mode and Zenkaku input mode.
- VK_KANA is Kana key to begin the Kana (Hiragana and Katakana) input or toggle the Hiragana mode and the Katakana mode.
- VK_CONVERT is Convert key to convert the text.
- VK_NONCONVERT is Non-Convert key to revert conversion.

Some punctuation key mapping differs from English key mapping.

There is Romaji input mode and Kana input mode. These modes are exclusive.
You can toggle these modes by Alt+Kana key.
In Romaji input mode, typing Alphabet key makes translation from English Alphabet to Kana.
In Kana input mode, typing Hiragana key makes Hiragana character input.

To enter Japanese text at first, press Alt+VK_KANJI (or simply VK_KANJI in new Windows).
It enables Zenkaku mode. Pressing Alt+VK_KANJI again, it disables Zenkaku mode.

In Zenkaku mode, the Zenkaku characters that the user typed is displayed with underlined text (indeterminated composition text).
Then Space key or VK_CONVERT key makes Kana-Kanji conversion.
The conversion candidates will be displayed with highlighten text.
Pressing space or VK_CONVERT key again makes next conversion (it might show the list of the candidates).
Pressing Enter key commits the conversion text and that the selected candidate text will be actually entered text box.
Esc key in Zenkaku mode makes cancellation of conversion.

## How is the Chinese keyboard?

It can type English alphabet and the Chinese radicals.
I don't know well.

## How is the Korean keyboard?

It can type English alphabet and the Hangul radicals.
Additionally, it has VK_HANGUL, VK_JUNJA and VK_HANJA virtual keys.

- VK_HANGUL is the Hangul input mode key (same as VK_KANA).
- VK_JUNJA is the Junja mode key.
- VK_HANJA is the Hanja mode key.
