# Remove message queue

**Name:** Namesh

Pass the queue ID. This deletes pending messages in that queue.

## Compile and run
```sh
gcc -Wall -Wextra msgq_remove.c -o msgq_remove && ./msgq_remove <msqid>
```
Use Linux for Linux-specific APIs and commands. Read the code comments before running exercises that send signals, kill processes, or create IPC resources.
