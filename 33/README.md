# Communicate between two machines using TCP sockets

**Name:** Namesh

Run server on one machine and client on another; use server IP and allow TCP port 5050 through firewall. For local test use 127.0.0.1.

## Compile and run
```sh
gcc -Wall -Wextra socket_server.c -o socket_server
gcc -Wall -Wextra socket_client.c -o socket_client
# server machine: ./socket_server
# client machine: ./socket_client <server-ip>
```
Use Linux for Linux-specific APIs and commands. Read the code comments before running exercises that send signals, kill processes, or create IPC resources.
