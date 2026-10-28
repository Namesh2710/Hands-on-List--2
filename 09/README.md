# Ignore then reset SIGINT with signal()

**Name:** Namesh

Press Ctrl+C during the first five seconds (ignored); after reset, Ctrl+C terminates the program.

## Compile and run
```sh
gcc -Wall -Wextra ignore_reset_signal.c -o ignore_reset_signal && ./ignore_reset_signal
```
Use Linux for Linux-specific APIs and commands. Read the code comments before running exercises that send signals, kill processes, or create IPC resources.
