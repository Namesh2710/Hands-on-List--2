/* Name: Namesh | System Software-II Hands-on List II */
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
int main(void){int f=open("namesh_fifo",O_WRONLY);if(f<0){perror("start receiver first");return 1;}char*m="Hello from Namesh sender";write(f,m,strlen(m));close(f);return 0;}
