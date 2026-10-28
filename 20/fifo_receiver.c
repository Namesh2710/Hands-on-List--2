/* Name: Namesh | System Software-II Hands-on List II */
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <errno.h>
int main(void){if(mkfifo("namesh_fifo",0600)<0&&errno!=EEXIST){perror("mkfifo");return 1;}int f=open("namesh_fifo",O_RDONLY);if(f<0){perror("open");return 1;}char b[256];ssize_t n=read(f,b,255);if(n>0){b[n]=0;printf("Namesh receiver: %s\n",b);}close(f);return 0;}
