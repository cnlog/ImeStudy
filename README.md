# FAQ of IME/IMM

## What is IME?

IME is Input Method Editor, that is text conversion software for Asian Windows users.
IME allows the Asian users to input Asian text.

The body of an IME is a DLL file that is registered as an IME in the operating system.
An IME can provide the functions whose names begin with `"Ime"`, and `NotifyIME` function. For more details, see IME Hackerz.

Usually, the IME software has to provide its IME installer to register itself into the system.

For more details, see IME Hackerz.

## What is IMM?

IMM is Input Method Manager for Windows, that provides the interface between the user and an IME software.

## What is IMM32?

IMM32 is 32-bit IMM for Windows. That is a DLL file that is located in `C:\Windows\system32` as the name of "imm32.dll".

IMM32 provides API functions whose names begin with `"Imm"`. For more details, see IME Hackerz.

## How to use IMM32 in my program?

Just include `<imm.h>` and link to imm32.dll as follows:

```c
#include <windows.h>
#include <imm.h>
#pragma comment(lib, "imm32.lib")
```

## What is "keyboard layout"?

The key code system differs depending on the keyboard or the keyboard language.
The position of the physical key may change.
Also, the key code mapping may change.

Usually, Japanese people uses Japanese keyboards.
Chinese people uses Chinese keyboards.
Korean people uses Korean keyboards.
Japanese user doesn't want to use English keyboard to input Japanese text.

## What is Zenkaku or Hankaku?

A Hankaku (半角) character is a single-byte character.
A non-Hankaku character is a Zenkaku (全角) character (in Traditional Japanese).
Traditionally, a non-single-byte character (in Shift_JIS encoding) has double width of a Hankaku character.
A Japanese fixed-width font should follow this traditional rule.

## What is Hiragana and Katakana?

- Hiragana is a Japanese phonetic character collection (like あいうえお etc.).
- Katakana is a Japanese phonetic character collection (like アイウエオ etc.).

## What is Kana?

Kana is Hiragana and/or Katakana.

## What is Kanji?

The Kanji characters in Japanese originate on the Chinese characters (like 亜阿唖).

## What is Kanji radical?

The Kanji radical is a systematic component of the Chinese character (or a Kanji character).

## What is Romaji conversion?

Romaji conversion is a translation from English alphabet text into Kana character text.

## What is Kana-Kanji conversion?

Kana-Kanji conversion is a conversion from Kana text into Kanji or something text.
A normal Japanese keyboard cannot type the Kanji characters directly.

## How is the Japanese keyboard?

The current Japanese keyboard standard is 109-keyboard.
It can type English alphabet and Hiragana characters, and some Japanese symbols and punctuations.
Additionally it has the `VK_KANJI`, `VK_KANA`, `VK_CONVERT`, and `VK_NONCONVERT` virtual keys.

- `VK_KANJI` (半角／全角) key is Hankaku/Zenkaku key to toggle Hankaku input mode and Zenkaku input mode.
- `VK_KANA` (かな) key is Kana key to begin the Kana (Hiragana and Katakana) input or toggle the Hiragana mode and the Katakana mode. These two modes are exclusive.
- `VK_CONVERT` (変換) is Convert key to convert the text.
- `VK_NONCONVERT` (無変換) is Don't-Convert key to revert conversion.

Some punctuation key mapping differs from English key mapping.

## How is the Chinese keyboard?

It can type English alphabet and the Chinese radicals.

## How is the Korean keyboard?

It can type English alphabet and the Hangul radicals.
Additionally, it has `VK_HANGUL`, `VK_JUNJA` and `VK_HANJA` virtual keys.

- `VK_HANGUL` is the Hangul input mode key (same as `VK_KANA`).
- `VK_JUNJA` is the Junja mode key.
- `VK_HANJA` is the Hanja mode key.

## How to input Japanese text?

A normal Japanese keyboard cannot type the Kanji characters directly.
The Japanese user inputs the Hiragana text (or Romaji-converted text) into IME and converts into Kanji or something text by the IME.

There is Romaji input mode and Kana input mode. These modes are exclusive. You can toggle these modes by `Alt+VK_KANA` key.
In Romaji input mode, typing Alphabet key makes translation from English Alphabet to Kana.
In Kana input mode, typing actual Hiragana key makes Hiragana character input.

To begin Japanese text, press `Alt+VK_KANJI` (or simply `VK_KANJI` in new Windows).
It enables Zenkaku mode and "あ" will be displayed on Taskbar or IME bar.
Pressing `Alt+VK_KANJI` again, it disables Zenkaku mode and "A" will be displayed on Taskbar or IME bar (Hankaku mode).

In Zenkaku mode, the Zenkaku characters that the user typed is displayed with underlined text (indeterminated composition text).
Then `Space` key or `VK_CONVERT` key makes Kana-Kanji conversion of that text.
Then the conversion candidates will be displayed with highlighted text.
Pressing `Space` or `VK_CONVERT` key again makes next conversion (it might show the list of the candidates).
Pressing `Enter` key commits the conversion text and that the selected candidate text will be actually entered the text box.
`Esc` key in Zenkaku mode makes cancellation of conversion.

## How to input Chinese text?

The Chinese user enters the Kanji radicals into IME.
The IME in Kanji mode automatically converts them into Kanji characters.

## Where is free Japanese IME?

See `mzimeja`.

# Reference

- REF000: The Internet Archive: WayBack Machine: https://archive.org/web
- REF001: WineHQ (free Windows Emulator): https://www.winehq.org
- REF002: WineHQ Repository: https://github.com/wine-mirror/wine
- REF003: ReactOS (free Windows-compatible OS): https://www.reactos.org
- REF004: ReactOS Repository: https://github.com/reactos/reactos
- REF005: WineHQ IMM32 source: https://github.com/wine-mirror/wine/tree/master/dlls/imm32
- REF006: WineHQ USER32 source: https://github.com/wine-mirror/wine/tree/master/dlls/user32
- REF007: ReactOS IMM32 source: https://github.com/reactos/reactos/tree/master/dll/win32/imm32
- REF008: ReactOS USER32 source: https://github.com/reactos/reactos/tree/master/win32ss/user
- REF009: Win32 Multilingual IME Application Programming Interface Version 1.41 ([ime-api.pdf](ime-api.pdf))
- REF010: Win32 Multilingual IME Overview for IME Development Version 1.41 ([ime-overview.pdf](ime-overview.pdf))
- REF011: IME Hackerz (English): http://www.geocities.jp/katayama_hirofumi_mz/imehackerz/en
- REF012: IME Hackerz (Japanese): http://www.geocities.jp/katayama_hirofumi_mz/imehackerz/ja
- REF013: MZ-IME Japanese Input for Windows 2000 (mzimeja): https://github.com/katahiromz/mzimeja
- REF014: Wikipedia: Hiragana: https://en.wikipedia.org/wiki/Hiragana
- REF015: Wikipedia: Kanji: https://en.wikipedia.org/wiki/Kanji
- REF016: Wikipedia: Katakana: https://en.wikipedia.org/wiki/Katakana
- REF017: Wikipedia: Kanji: https://en.wikipedia.org/wiki/IME
- REF018: Wikipedia: Input method: https://en.wikipedia.org/wiki/Input_method
- REF019: Wikipedia: Keyboard layout: https://en.wikipedia.org/wiki/Keyboard_layout
