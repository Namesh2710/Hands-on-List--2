# Create orphan process by killing parent

**Name:** Namesh

Child sends SIGKILL to its parent. This is disruptive only to this demonstration process.

## Compile and run
```sh
gcc -Wall -Wextra orphan.c -o orphan && ./orphan
```
Use Linux for Linux-specific APIs and commands. Read the code comments before running exercises that send signals, kill processes, or create IPC resources.
