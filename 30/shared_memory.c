/* Name: Namesh | System Software-II Hands-on List II */
#include <stdio.h>
#include <string.h>
#include <sys/ipc.h>
#include <sys/shm.h>
int main(void){int id=shmget(IPC_PRIVATE,1024,IPC_CREAT|0600);if(id<0){perror("shmget");return 1;}char*p=shmat(id,NULL,0);if(p==(void*)-1){perror("shmat");shmctl(id,IPC_RMID,NULL);return 1;}strcpy(p,"Hello shared memory from Namesh");printf("Written: %s\n",p);shmdt(p);char*r=shmat(id,NULL,SHM_RDONLY);if(r==(void*)-1){perror("read-only shmat");shmctl(id,IPC_RMID,NULL);return 1;}printf("Read-only attach: %s\n",r);puts("Writing through SHM_RDONLY is prohibited; not attempted.");shmdt(r);if(shmctl(id,IPC_RMID,NULL)<0){perror("IPC_RMID");return 1;}puts("Detached and removed");return 0;}
