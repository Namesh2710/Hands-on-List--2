# Concurrent server using fork and pthread_create

**Name:** Namesh

Two alternative concurrent TCP servers use port 5051. Start one server, then run the client in another terminal. Ctrl+C stops the server.

## Compile and run
```sh
gcc -Wall -Wextra server_fork.c -o server_fork
gcc -Wall -Wextra server_pthread.c -o server_pthread -pthread
gcc -Wall -Wextra client.c -o client
# terminal 1: ./server_fork OR ./server_pthread
# terminal 2: ./client 127.0.0.1
```
Use Linux for Linux-specific APIs and commands. Read the code comments before running exercises that send signals, kill processes, or create IPC resources.
