/* Name: Namesh | System Software-II Hands-on List II */
#include <stdio.h>
#include <sys/ipc.h>
#include <sys/sem.h>
union semun{int val;};
int main(void){int a=semget(IPC_PRIVATE,1,IPC_CREAT|0600),b=semget(IPC_PRIVATE,1,IPC_CREAT|0600);if(a<0||b<0){perror("semget");return 1;}union semun u;u.val=1;semctl(a,0,SETVAL,u);u.val=3;semctl(b,0,SETVAL,u);printf("Namesh binary semaphore ID=%d value=1; counting ID=%d value=3\n",a,b);semctl(a,0,IPC_RMID);semctl(b,0,IPC_RMID);return 0;}
