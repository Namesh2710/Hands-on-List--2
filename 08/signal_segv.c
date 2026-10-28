/* Name: Namesh | System Software-II Hands-on List II */
#include <stdio.h>
#include <signal.h>
#include <unistd.h>

static void h(int s){printf("\nNamesh caught signal %d\n",s);fflush(stdout);_exit(0);}
int main(void){signal(SIGSEGV,h);puts("Triggering SIGSEGV"); fflush(stdout); *(volatile int*)0=1;return 0;}
