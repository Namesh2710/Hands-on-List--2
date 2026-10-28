/* Name: Namesh | System Software-II Hands-on List II */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/ipc.h>
#include <sys/msg.h>
struct msg{long type;char text[128];};
int main(int c,char**v){if(c!=2){fprintf(stderr,"Usage: %s msqid\n",v[0]);return 2;}struct msg m={.type=1};strcpy(m.text,"Message sent by Namesh");if(msgsnd(atoi(v[1]),&m,strlen(m.text)+1,0)<0){perror("msgsnd");return 1;}puts("Message sent");return 0;}
