# One-way FIFO communication

**Name:** Namesh

Start receiver first in terminal 1, then sender in terminal 2. Clean up FIFO with rm -f namesh_fifo.

## Compile and run
```sh
gcc -Wall -Wextra fifo_receiver.c -o fifo_receiver
gcc -Wall -Wextra fifo_sender.c -o fifo_sender
# terminal 1: ./fifo_receiver
# terminal 2: ./fifo_sender
# cleanup: rm -f namesh_fifo
```
Use Linux for Linux-specific APIs and commands. Read the code comments before running exercises that send signals, kill processes, or create IPC resources.
