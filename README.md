# Rock-Paper-Scissor

A simple console-based Rock-Paper-Scissors game written in C.

## Description

This project includes a single C program, `rps.c`, that lets a player choose Rock, Paper, or Scissor and plays one round against the computer.

The computer choice is randomized, and the program displays the game result and chosen moves.

## Files

- `rps.c` - C source code for the Rock-Paper-Scissor game.
- `README.md` - Project documentation.

## Build Instructions

Use a C compiler such as `gcc` to compile the program.

Example:

```bash
gcc rps.c -o rps
```

## Run Instructions

Run the compiled executable from the project folder:

```bash
./rps
```

On Windows, use:

```powershell
rps.exe
```

## Game Controls

When prompted, enter one of the following characters:

- `r` for Rock
- `p` for Paper
- `s` for Scissor

## Example

```text
Choose one:
r for Rock, p for Paper, s for Scissor => r
You won!
Player: Rock | Computer: Scissor
```

## Notes

- Input is case-sensitive and expects lowercase letters.
- The game plays a single round and then exits.
