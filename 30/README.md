# Create, write, read-only attach, detach and remove shared memory

**Name:** Namesh

Uses System V shared memory. Does not attempt an illegal write through a read-only mapping because that can crash the process.

## Compile and run
```sh
gcc -Wall -Wextra shared_memory.c -o shared_memory && ./shared_memory
```
Use Linux for Linux-specific APIs and commands. Read the code comments before running exercises that send signals, kill processes, or create IPC resources.
