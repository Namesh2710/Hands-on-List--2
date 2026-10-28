# Two-way FIFO communication

**Name:** Namesh

Run fifo_a and fifo_b in separate terminals. They exchange one message each using two named pipes. Clean up with rm -f.

## Compile and run
```sh
gcc -Wall -Wextra fifo_a.c -o fifo_a
gcc -Wall -Wextra fifo_b.c -o fifo_b
# terminal 1: ./fifo_a
# terminal 2: ./fifo_b
# cleanup: rm -f namesh_a_to_b namesh_b_to_a
```
Use Linux for Linux-specific APIs and commands. Read the code comments before running exercises that send signals, kill processes, or create IPC resources.
