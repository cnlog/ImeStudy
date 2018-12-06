# Experiment04

## Purpose

Inspect IME UI window of Notepad.

## Platform

Windows 2000 Japanese.

## Tools

- WinSpy++
- MessageSpy

## Window Handles

- HWND 00050102, window class name "Notepad", window text "無題 - メモ帳"
- HWND 000500B0, window class name "Edit", window text ""
- HWND 000400AC, window class name "IME", window text "Default IME"
- HWND 00060082, window class name "msime98main", window text "msime98main"

## Window Hierarchy

- HWND 00050102 ("Notepad") is the top-level window.
- HWND 000500B0 ("Edit") is child window of HWND 00050102.
- HWND 000400AC ("IME") is owned by HWND 00050102.
- HWND 00060082 ("msime98main") is owned by HWND 000400AC.

## Screenshots

- [IME-UI-1.png](IME-UI-1.png)
- [IME-UI-2.png](IME-UI-2.png)
- [IME-UI-3.png](IME-UI-3.png)
- [IME-UI-4.png](IME-UI-4.png)
- [IME-UI-5.png](IME-UI-5.png)
