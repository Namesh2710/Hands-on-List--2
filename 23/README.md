# Print open-file limit and pipe capacity

**Name:** Namesh

Uses RLIMIT_NOFILE and Linux F_GETPIPE_SZ.

## Compile and run
```sh
gcc -Wall -Wextra pipe_capacity.c -o pipe_capacity && ./pipe_capacity
```
Use Linux for Linux-specific APIs and commands. Read the code comments before running exercises that send signals, kill processes, or create IPC resources.
