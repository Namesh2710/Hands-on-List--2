/* Name: Namesh | System Software-II Hands-on List II */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/ipc.h>
#include <sys/msg.h>
int main(int c,char**v){if(c!=2){fprintf(stderr,"Usage: %s msqid\n",v[0]);return 2;}struct msqid_ds d;if(msgctl(atoi(v[1]),IPC_STAT,&d)<0){perror("msgctl");return 1;}printf("Namesh queue %s\n",v[1]);printf("Permissions=%o UID=%u GID=%u\n",(unsigned)(d.msg_perm.mode&0777),(unsigned)d.msg_perm.uid,(unsigned)d.msg_perm.gid);printf("Last send: %s",ctime(&d.msg_stime));printf("Last receive: %s",ctime(&d.msg_rtime));printf("Last change: %s",ctime(&d.msg_ctime));printf("Bytes=%lu messages=%lu max bytes=%lu\n",(unsigned long)d.__msg_cbytes,(unsigned long)d.msg_qnum,(unsigned long)d.msg_qbytes);printf("Last sender PID=%ld receiver PID=%ld\n",(long)d.msg_lspid,(long)d.msg_lrpid);return 0;}
