# Interval timers

**Name:** Namesh

Separate examples for ITIMER_REAL, ITIMER_VIRTUAL and ITIMER_PROF. Initial expiry is 10 seconds; repeat interval is 10 microseconds.

## Compile and run
```sh
gcc -Wall -Wextra itimer_real.c -o real && ./real
gcc -Wall -Wextra itimer_virtual.c -o virtual && ./virtual
gcc -Wall -Wextra itimer_prof.c -o prof && ./prof
```
Use Linux for Linux-specific APIs and commands. Read the code comments before running exercises that send signals, kill processes, or create IPC resources.
