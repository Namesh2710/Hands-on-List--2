/* Name: Namesh | System Software-II Hands-on List II */
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
int main(void){int p[2];pipe(p);pid_t x=fork();if(x<0){perror("fork");return 1;}if(x==0){close(p[1]);char b[128];ssize_t n=read(p[0],b,127);if(n>0){b[n]=0;printf("Child received: %s\n",b);}close(p[0]);return 0;}close(p[0]);char*m="Message from Namesh parent";write(p[1],m,strlen(m));close(p[1]);waitpid(x,NULL,0);return 0;}
