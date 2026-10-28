/* Name: Namesh | System Software-II Hands-on List II */
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/socket.h>
int main(void){int s=socket(AF_INET,SOCK_STREAM,0);if(s<0){perror("socket");return 1;}int y=1;setsockopt(s,SOL_SOCKET,SO_REUSEADDR,&y,sizeof y);struct sockaddr_in a={0};a.sin_family=AF_INET;a.sin_port=htons(5050);a.sin_addr.s_addr=htonl(INADDR_ANY);if(bind(s,(void*)&a,sizeof a)<0||listen(s,5)<0){perror("bind/listen");return 1;}puts("Namesh server listening on 5050");int c=accept(s,NULL,NULL);if(c<0){perror("accept");return 1;}char b[512];ssize_t n=read(c,b,511);if(n>0){b[n]=0;printf("Client: %s\n",b);char*r="Hello from Namesh server";write(c,r,strlen(r));}close(c);close(s);return 0;}
