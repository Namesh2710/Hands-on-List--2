# Ignore then reset SIGINT with sigaction()

**Name:** Namesh

Press Ctrl+C during the first five seconds, then again after default behavior is restored.

## Compile and run
```sh
gcc -Wall -Wextra ignore_reset_sigaction.c -o ignore_reset_sigaction && ./ignore_reset_sigaction
```
Use Linux for Linux-specific APIs and commands. Read the code comments before running exercises that send signals, kill processes, or create IPC resources.
