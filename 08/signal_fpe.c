/* Name: Namesh | System Software-II Hands-on List II */
#include <stdio.h>
#include <signal.h>
#include <unistd.h>

static void h(int s){printf("\nNamesh caught signal %d\n",s);fflush(stdout);_exit(0);}
int main(void){signal(SIGFPE,h);puts("Triggering SIGFPE"); fflush(stdout); volatile int z=0; volatile int x=1/z; (void)x;return 0;}
