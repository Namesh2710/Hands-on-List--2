/* Name: Namesh | System Software-II Hands-on List II */
#include <stdio.h>
#include <stdlib.h>
#include <sys/ipc.h>
#include <sys/msg.h>
struct msg{long type;char text[128];};
int main(int c,char**v){if(c!=2){fprintf(stderr,"Usage: %s msqid\\n",v[0]);return 2;}struct msg m;ssize_t n=msgrcv(atoi(v[1]),&m,sizeof m.text,0,IPC_NOWAIT);if(n<0){perror("msgrcv");return 1;}printf("Namesh received type %ld: %s\\n",m.type,m.text);return 0;}
