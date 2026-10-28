/* Name: Namesh | System Software-II Hands-on List II */
#include <stdio.h>
#include <sys/ipc.h>
#include <sys/sem.h>
#include <sys/shm.h>
#include <sys/wait.h>
#include <unistd.h>
union semun{int val;};
int main(void){int s=semget(IPC_PRIVATE,1,IPC_CREAT|0600),id=shmget(IPC_PRIVATE,sizeof(int),IPC_CREAT|0600);if(s<0||id<0){perror("IPC create");return 1;}union semun u={1};semctl(s,0,SETVAL,u);int*p=shmat(id,NULL,0);if(p==(void*)-1){perror("shmat");return 1;}*p=0;pid_t c=fork();for(int i=0;i<1000;i++){struct sembuf l={0,-1,0},v={0,1,0};semop(s,&l,1);++*p;semop(s,&v,1);}if(c>0){waitpid(c,NULL,0);printf("Namesh protected counter=%d (expected 2000)\n",*p);}shmdt(p);shmctl(id,IPC_RMID,NULL);semctl(s,0,IPC_RMID);return 0;}
