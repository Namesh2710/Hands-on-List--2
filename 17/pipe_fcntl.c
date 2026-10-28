/* Name: Namesh | System Software-II Hands-on List II */
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/wait.h>
int main(void){int p[2];if(pipe(p)<0){perror("pipe");return 1;}pid_t a=fork();if(a==0){close(p[0]); int d=fcntl(p[1],F_DUPFD,3);if(d<0){perror("fcntl");_exit(1);}if(dup2(d,1)<0)_exit(1);close(p[1]);execlp("ls","ls","-l",(char*)NULL);perror("ls");_exit(127);}pid_t b=fork();if(b==0){close(p[1]); int d=fcntl(p[0],F_DUPFD,3);if(d<0){perror("fcntl");_exit(1);}if(dup2(d,0)<0)_exit(1);close(p[0]);execlp("wc","wc",(char*)NULL);perror("wc");_exit(127);}close(p[0]);close(p[1]);waitpid(a,NULL,0);waitpid(b,NULL,0);return 0;}
