# Receive message with blocking and IPC_NOWAIT

**Name:** Namesh

Create queue and send a message using question 26. Each program consumes one queued message.

## Compile and run
```sh
gcc -Wall -Wextra msgq_receive_blocking.c -o msgq_receive_blocking
gcc -Wall -Wextra msgq_receive_nowait.c -o msgq_receive_nowait
./msgq_receive_blocking <msqid>
./msgq_receive_nowait <msqid>
```
Use Linux for Linux-specific APIs and commands. Read the code comments before running exercises that send signals, kill processes, or create IPC resources.
