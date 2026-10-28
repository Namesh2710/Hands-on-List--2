# Catch SIGSEGV, SIGINT, SIGFPE using sigaction()

**Name:** Namesh

Separate examples. SIGSEGV and SIGFPE intentionally trigger the respective signal.

## Compile and run
```sh
gcc -Wall -Wextra sigaction_int.c -o sigaction_int && ./sigaction_int
```
Use Linux for Linux-specific APIs and commands. Read the code comments before running exercises that send signals, kill processes, or create IPC resources.
