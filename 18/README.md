# Count directories using ls -l | grep ^d | wc -l

**Name:** Namesh

Uses dup2 to connect the three commands with two pipes.

## Compile and run
```sh
gcc -Wall -Wextra count_dirs.c -o count_dirs && ./count_dirs
```
Use Linux for Linux-specific APIs and commands. Read the code comments before running exercises that send signals, kill processes, or create IPC resources.
