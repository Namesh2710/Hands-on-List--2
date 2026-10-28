/* Name: Namesh | System Software-II Hands-on List II */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <pthread.h>
#include <arpa/inet.h>
#include <sys/socket.h>
static void *serve(void*x){int c=*(int*)x;free(x);char b[512];ssize_t n=read(c,b,511);if(n>0){b[n]=0;printf("Namesh pthread worker got: %s\n",b);char*r="Handled by pthread server";write(c,r,strlen(r));}close(c);return NULL;}
int main(void){int s=socket(AF_INET,SOCK_STREAM,0);int y=1;setsockopt(s,SOL_SOCKET,SO_REUSEADDR,&y,sizeof y);struct sockaddr_in a={0};a.sin_family=AF_INET;a.sin_port=htons(5051);a.sin_addr.s_addr=htonl(INADDR_ANY);if(bind(s,(void*)&a,sizeof a)<0||listen(s,10)<0){perror("bind/listen");return 1;}puts("Namesh pthread server on port 5051");for(;;){int c=accept(s,NULL,NULL);if(c<0)continue;int*p=malloc(sizeof *p);if(!p){close(c);continue;}*p=c;pthread_t t;if(pthread_create(&t,NULL,serve,p)){close(c);free(p);continue;}pthread_detach(t);}}
