# Send message to message queue

**Name:** Namesh

Pass queue ID created by question 24. Inspect with `ipcs -q`.

## Compile and run
```sh
gcc -Wall -Wextra msgq_send.c -o msgq_send && ./msgq_send <msqid>
ipcs -q
```
Use Linux for Linux-specific APIs and commands. Read the code comments before running exercises that send signals, kill processes, or create IPC resources.
