/* Name: Namesh | System Software-II Hands-on List II */
#include <stdio.h>
#include <stdlib.h>
#include <sys/ipc.h>
#include <sys/msg.h>
int main(int c,char**v){if(c!=2){fprintf(stderr,"Usage: %s msqid\n",v[0]);return 2;}if(msgctl(atoi(v[1]),IPC_RMID,NULL)<0){perror("IPC_RMID");return 1;}puts("Namesh: queue removed");return 0;}
