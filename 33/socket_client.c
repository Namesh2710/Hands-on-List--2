/* Name: Namesh | System Software-II Hands-on List II */
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/socket.h>
int main(int c,char**v){if(c!=2){fprintf(stderr,"Usage: %s server-ip\n",v[0]);return 2;}int s=socket(AF_INET,SOCK_STREAM,0);struct sockaddr_in a={0};a.sin_family=AF_INET;a.sin_port=htons(5050);if(inet_pton(AF_INET,v[1],&a.sin_addr)!=1){fprintf(stderr,"Invalid IPv4 address\n");return 2;}if(connect(s,(void*)&a,sizeof a)<0){perror("connect");return 1;}char*m="Hello from Namesh client";write(s,m,strlen(m));char b[512];ssize_t n=read(s,b,511);if(n>0){b[n]=0;printf("Server: %s\n",b);}close(s);return 0;}
