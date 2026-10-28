/* Name: Namesh | System Software-II Hands-on List II */
#include <stdio.h>
#include <signal.h>
#include <unistd.h>

static void h(int s){printf("\nNamesh caught signal %d\n",s);fflush(stdout);_exit(0);}
int main(void){signal(SIGINT,h);puts("Press Ctrl+C"); while(1) pause();return 0;}
