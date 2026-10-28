# Semaphore critical-section examples

**Name:** Namesh

Includes a protected ticket counter, a semaphore-protected shared-memory counter, and a counting semaphore for two pseudo-resources. Programs clean up their IPC objects.

## Compile and run
```sh
gcc -Wall -Wextra ticket_semaphore.c -o ticket_semaphore && ./ticket_semaphore
gcc -Wall -Wextra shared_protect.c -o shared_protect && ./shared_protect
gcc -Wall -Wextra counting_resources.c -o counting_resources && ./counting_resources
```
Use Linux for Linux-specific APIs and commands. Read the code comments before running exercises that send signals, kill processes, or create IPC resources.
