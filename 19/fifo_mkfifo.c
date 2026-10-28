/* Name: Namesh | System Software-II Hands-on List II */
#include <stdio.h>
#include <sys/stat.h>
int main(void){if(mkfifo("namesh_fifo_mkfifo",0600)<0){perror("mkfifo");return 1;}puts("FIFO created");return 0;}
