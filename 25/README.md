# Print message queue metadata

**Name:** Namesh

Pass an existing message queue ID (create one with question 24). Linux exposes byte count and sender/receiver PID fields in msqid_ds.

## Compile and run
```sh
gcc -Wall -Wextra msgq_info.c -o msgq_info
./msgq_info <msqid>
```
Use Linux for Linux-specific APIs and commands. Read the code comments before running exercises that send signals, kill processes, or create IPC resources.
