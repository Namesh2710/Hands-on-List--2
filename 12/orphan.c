/* Name: Namesh | System Software-II Hands-on List II */
#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <sys/wait.h>
int main(void){pid_t parent=getpid(),p=fork();if(p<0){perror("fork");return 1;}if(p==0){sleep(1);printf("Namesh child %ld kills parent %ld\n",(long)getpid(),(long)parent);fflush(stdout);kill(parent,SIGKILL);sleep(1);printf("New parent PID=%ld\n",(long)getppid());return 0;}printf("Parent PID=%ld child PID=%ld\n",(long)parent,(long)p);while(1)pause();}
