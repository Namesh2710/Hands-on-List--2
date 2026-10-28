/* Name: Namesh | System Software-II Hands-on List II */
#include <stdio.h>
#include <stdlib.h>
#include <sys/ipc.h>
#include <sys/msg.h>
int main(int c,char**v){if(c!=2){fprintf(stderr,"Usage: %s msqid\n",v[0]);return 2;}int id=atoi(v[1]);struct msqid_ds d;if(msgctl(id,IPC_STAT,&d)<0){perror("IPC_STAT");return 1;}d.msg_perm.mode=(d.msg_perm.mode&~0777)|0600;if(msgctl(id,IPC_SET,&d)<0){perror("IPC_SET");return 1;}puts("Namesh: permission set to 0600");return 0;}
