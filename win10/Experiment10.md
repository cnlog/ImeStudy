# Experiment10

## Purpose

Inspect IME class window of Notepad with 'Search' dialog.

## Platform

Windows 2003.

## Tools

- WinSpy++
- MessageSpy

## Window Handles

- HWND ????????, window class name "#32770", window text "åüçı" ("Find" in Japanese)
- HWND 00D80378, window class name "IME", window text "Default IME"
- HWND 004909B0, window class name "MSCTFIME", window text "M???..."

## Window Hierarchy

- HWND 00D80378 ("IME") is owned by 'Find' dialog.
- HWND 004909B0 ("MSCTFIME") is owned by HWND 00D80378.

## Screenshots

- [IME-class-7.png](IME-UI-7.png)
