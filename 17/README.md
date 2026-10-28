# Run ls -l | wc using dup, dup2 and fcntl

**Name:** Namesh

Each source connects ls output to wc input. `fcntl` version demonstrates F_DUPFD and dup2 for standard-stream redirection.

## Compile and run
```sh
gcc -Wall -Wextra pipe_dup.c -o pipe_dup && ./pipe_dup
gcc -Wall -Wextra pipe_dup2.c -o pipe_dup2 && ./pipe_dup2
gcc -Wall -Wextra pipe_fcntl.c -o pipe_fcntl && ./pipe_fcntl
```
Use Linux for Linux-specific APIs and commands. Read the code comments before running exercises that send signals, kill processes, or create IPC resources.
