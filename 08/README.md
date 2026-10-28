# Catch signals using signal()

**Name:** Namesh

Each C file demonstrates one signal. SIGSEGV and SIGFPE are intentionally triggered. Timer signals use setitimer().

## Compile and run
```sh
gcc -Wall -Wextra signal_int.c -o signal_int && ./signal_int
```
Use Linux for Linux-specific APIs and commands. Read the code comments before running exercises that send signals, kill processes, or create IPC resources.
