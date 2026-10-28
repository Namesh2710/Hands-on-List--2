# Set a resource limit

**Name:** Namesh

Changes the soft open-file limit to at most 64 while preserving the hard limit.

## Compile and run
```sh
gcc -Wall -Wextra setrlimit_one.c -o setrlimit_one && ./setrlimit_one
```
Use Linux for Linux-specific APIs and commands. Read the code comments before running exercises that send signals, kill processes, or create IPC resources.
