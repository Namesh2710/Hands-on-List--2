/* Name: Namesh | System Software-II Hands-on List II */
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
int main(void){int a[2],b[2];pipe(a);pipe(b);pid_t x=fork();if(!x){dup2(a[1],1);close(a[0]);close(a[1]);close(b[0]);close(b[1]);execlp("ls","ls","-l",NULL);_exit(127);}pid_t y=fork();if(!y){dup2(a[0],0);dup2(b[1],1);close(a[0]);close(a[1]);close(b[0]);close(b[1]);execlp("grep","grep","^d",NULL);_exit(127);}pid_t z=fork();if(!z){dup2(b[0],0);close(a[0]);close(a[1]);close(b[0]);close(b[1]);execlp("wc","wc","-l",NULL);_exit(127);}close(a[0]);close(a[1]);close(b[0]);close(b[1]);waitpid(x,NULL,0);waitpid(y,NULL,0);waitpid(z,NULL,0);return 0;}
