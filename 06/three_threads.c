/* Name: Namesh | System Software-II Hands-on List II */
#include <stdio.h>
#include <pthread.h>
static void *run(void*p){printf("Namesh worker %ld running\n",(long)p);return NULL;}
int main(void){pthread_t t[3];for(long i=0;i<3;i++)if(pthread_create(&t[i],NULL,run,(void*)i)){puts("pthread_create failed");return 1;}for(int i=0;i<3;i++)pthread_join(t[i],NULL);return 0;}
