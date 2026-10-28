/* Name: Namesh | System Software-II Hands-on List II */
#include <stdio.h>
#include <sys/ipc.h>
#include <sys/msg.h>
int main(void){key_t k=ftok(".", 'N');if(k==(key_t)-1){perror("ftok");return 1;}int id=msgget(k,IPC_CREAT|IPC_EXCL|0600);if(id<0){perror("msgget; queue may already exist");return 1;}printf("Namesh key=%ld queue ID=%d\n",(long)k,id);return 0;}
