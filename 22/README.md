# Wait up to 10 seconds for FIFO data using select()

**Name:** Namesh

Start program, then in another terminal run `printf 'hello\n' > namesh_select_fifo`. Times out if nothing arrives. Remove FIFO afterward.

## Compile and run
```sh
gcc -Wall -Wextra select_fifo.c -o select_fifo && ./select_fifo
# other terminal: printf 'hello from Namesh\n' > namesh_select_fifo
# cleanup: rm -f namesh_select_fifo
```
Use Linux for Linux-specific APIs and commands. Read the code comments before running exercises that send signals, kill processes, or create IPC resources.
