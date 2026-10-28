/* Name: Namesh | System Software-II Hands-on List II */
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/select.h>
#include <errno.h>
int main(void){if(mkfifo("namesh_select_fifo",0600)<0&&errno!=EEXIST){perror("mkfifo");return 1;}int f=open("namesh_select_fifo",O_RDONLY|O_NONBLOCK);if(f<0){perror("open");return 1;}fd_set s;FD_ZERO(&s);FD_SET(f,&s);struct timeval t={10,0};puts("Namesh: waiting 10 seconds");int r=select(f+1,&s,NULL,NULL,&t);if(r<0)perror("select");else if(!r)puts("Timed out");else{char b[256];ssize_t n=read(f,b,255);if(n>0){b[n]=0;printf("Got: %s\n",b);}else puts("Readable, but no payload available");}close(f);return r<0;}
