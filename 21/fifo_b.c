/* Name: Namesh | System Software-II Hands-on List II */
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
int main(void){mkfifo("namesh_a_to_b",0600);mkfifo("namesh_b_to_a",0600);int f=open("namesh_a_to_b",O_RDONLY);if(f<0){perror("open");return 1;}char b[256];ssize_t n=read(f,b,255);if(n>0){b[n]=0;printf("B received: %s\n",b);}close(f);f=open("namesh_b_to_a",O_WRONLY);if(f<0){perror("open");return 1;}char*m="Reply from B";write(f,m,strlen(m));close(f);return 0;}
