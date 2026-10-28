/* Name: Namesh | System Software-II Hands-on List II */
#include <stdio.h>
#include <signal.h>
#include <unistd.h>
static void h(int s){printf("Namesh sigaction caught %d\n",s);fflush(stdout);_exit(0);}
int main(void){struct sigaction a={0};a.sa_handler=h;sigemptyset(&a.sa_mask);if(sigaction(SIGFPE,&a,NULL)<0){perror("sigaction");return 1;}puts("Namesh signal exercise");volatile int z=0;volatile int x=1/z;(void)x;return 0;}
