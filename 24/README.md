# Create message queue and print key and ID

**Name:** Namesh

Creates a System V message queue. Use `ipcs -q` to inspect and `ipcrm -q ID` to remove it.

## Compile and run
```sh
gcc -Wall -Wextra msgq_create.c -o msgq_create && ./msgq_create
ipcs -q
```
Use Linux for Linux-specific APIs and commands. Read the code comments before running exercises that send signals, kill processes, or create IPC resources.
