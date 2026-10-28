# Change message queue permission

**Name:** Namesh

Pass an existing queue ID. Sets permission bits to 0600, subject to owner privileges.

## Compile and run
```sh
gcc -Wall -Wextra msgq_chmod.c -o msgq_chmod && ./msgq_chmod <msqid>
```
Use Linux for Linux-specific APIs and commands. Read the code comments before running exercises that send signals, kill processes, or create IPC resources.
