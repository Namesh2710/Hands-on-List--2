/* Name: Namesh | System Software-II Hands-on List II */
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
int main(void){int a[2],b[2];pipe(a);pipe(b);pid_t p=fork();if(p<0){perror("fork");return 1;}if(!p){close(a[1]);close(b[0]);char x[128];ssize_t n=read(a[0],x,127);if(n>0){x[n]=0;printf("Child got: %s\n",x);}char*r="Reply from child";write(b[1],r,strlen(r));close(a[0]);close(b[1]);return 0;}close(a[0]);close(b[1]);char*m="Hello child from Namesh";write(a[1],m,strlen(m));close(a[1]);char x[128];ssize_t n=read(b[0],x,127);if(n>0){x[n]=0;printf("Parent got: %s\n",x);}close(b[0]);waitpid(p,NULL,0);return 0;}
