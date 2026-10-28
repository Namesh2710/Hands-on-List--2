# Measure 100 getppid calls with timestamp counter

**Name:** Namesh

Requires x86/x86-64. Reports TSC ticks, not seconds.

## Compile and run
```sh
gcc -Wall -Wextra getppid_tsc.c -o getppid_tsc && ./getppid_tsc
```
Use Linux for Linux-specific APIs and commands. Read the code comments before running exercises that send signals, kill processes, or create IPC resources.
