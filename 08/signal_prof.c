/* Name: Namesh | System Software-II Hands-on List II */
#define _DEFAULT_SOURCE
#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <sys/time.h>

static void h(int s){printf("\nNamesh caught signal %d\n",s);fflush(stdout);_exit(0);}
int main(void){signal(SIGPROF,h);struct itimerval t={{0,0},{0,100000}}; if(setitimer(ITIMER_PROF,&t,NULL)<0){perror("setitimer");return 1;} volatile unsigned long n=0; while(1)n++;return 0;}
