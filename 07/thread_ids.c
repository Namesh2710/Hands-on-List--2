/* Name: Namesh | System Software-II Hands-on List II */
#include <stdio.h>
#include <pthread.h>
static void *run(void*p){(void)p;printf("Namesh thread ID: %lu\n",(unsigned long)pthread_self());return NULL;}
int main(void){pthread_t t[3];for(int i=0;i<3;i++)if(pthread_create(&t[i],NULL,run,NULL)){puts("pthread_create failed");return 1;}for(int i=0;i<3;i++)pthread_join(t[i],NULL);return 0;}
