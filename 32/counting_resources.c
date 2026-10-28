/* Name: Namesh | System Software-II Hands-on List II */
#include <stdio.h>
#include <sys/ipc.h>
#include <sys/sem.h>
#include <sys/wait.h>
#include <unistd.h>
union semun{int val;};
int main(void){int s=semget(IPC_PRIVATE,1,IPC_CREAT|0600);if(s<0){perror("semget");return 1;}union semun u={2};semctl(s,0,SETVAL,u);pid_t c=fork();for(int i=0;i<3;i++){struct sembuf l={0,-1,0},v={0,1,0};semop(s,&l,1);printf("Namesh PID %ld acquired one of two resources\n",(long)getpid());fflush(stdout);sleep(1);semop(s,&v,1);}if(c>0)waitpid(c,NULL,0);semctl(s,0,IPC_RMID);return 0;}
