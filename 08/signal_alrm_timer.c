/* Name: Namesh | System Software-II Hands-on List II */
#define _DEFAULT_SOURCE
#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <sys/time.h>

static void h(int s){printf("\nNamesh caught signal %d\n",s);fflush(stdout);_exit(0);}
int main(void){signal(SIGALRM,h);struct itimerval t={{0,0},{3,0}}; if(setitimer(ITIMER_REAL,&t,NULL)<0){perror("setitimer");return 1;} while(1) pause();return 0;}
