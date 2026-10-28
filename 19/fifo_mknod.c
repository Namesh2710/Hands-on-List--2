/* Name: Namesh | System Software-II Hands-on List II */
#define _GNU_SOURCE
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
int main(void){if(mknod("namesh_fifo_mknod",S_IFIFO|0600,0)<0){perror("mknod");return 1;}puts("FIFO created");return 0;}
