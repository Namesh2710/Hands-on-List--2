# Test whether SIGSTOP can be caught

**Name:** Namesh

Run receiver and sender in separate terminals. SIGSTOP cannot be caught, blocked, or ignored; resume the stopped receiver with `kill -CONT PID`.

## Compile and run
```sh
gcc -Wall -Wextra receiver.c -o receiver
gcc -Wall -Wextra sender.c -o sender
# terminal 1: ./receiver
# terminal 2: ./sender <receiver-pid>
# resume: kill -CONT <receiver-pid>
```
Use Linux for Linux-specific APIs and commands. Read the code comments before running exercises that send signals, kill processes, or create IPC resources.
