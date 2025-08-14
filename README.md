# text_wave 🌊

A small C program that prints text as a **wave animation** in the terminal.  
Each character moves up and down smoothly using a sine function, creating a flowing wave effect.

## ✨ Features
- Simple logic — easy to understand and modify
- Uses **ANSI escape codes** to animate in the terminal
- Works with any text input
- Fun visual effect in pure C

## 🛠 Build & Run
```bash```
gcc -Wall -Wextra -Werror text_wave.c -o text_wave -lm

./text_wave "Hello 42!"
