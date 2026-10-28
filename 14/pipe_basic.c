/* Name: Namesh | System Software-II Hands-on List II */
#include <stdio.h>
#include <string.h>
#include <unistd.h>
int main(void){int p[2];char b[128];const char*m="Hello from Namesh pipe";if(pipe(p)<0){perror("pipe");return 1;}write(p[1],m,strlen(m));close(p[1]);ssize_t n=read(p[0],b,sizeof b-1);if(n<0){perror("read");return 1;}b[n]=0;printf("%s\n",b);close(p[0]);return 0;}
