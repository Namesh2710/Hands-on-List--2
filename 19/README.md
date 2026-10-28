# FIFO creation commands and APIs

**Name:** Namesh

Terminal commands: `mknod namesh_fifo_cmd p`, `mkfifo namesh_fifo_cmd2`. Compare with `strace -c mkfifo ...` and `strace -c mknod ... p` (install strace if needed). C programs use mknod() and mkfifo(). Remove test FIFOs with rm.

## Compile and run
```sh
gcc -Wall -Wextra fifo_mknod.c -o fifo_mknod && ./fifo_mknod
gcc -Wall -Wextra fifo_mkfifo.c -o fifo_mkfifo && ./fifo_mkfifo
mknod namesh_fifo_cmd p
mkfifo namesh_fifo_cmd2
strace -c mkfifo namesh_trace_mkfifo
strace -c mknod namesh_trace_mknod p
```
Use Linux for Linux-specific APIs and commands. Read the code comments before running exercises that send signals, kill processes, or create IPC resources.
