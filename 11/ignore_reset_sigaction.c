/* Name: Namesh | System Software-II Hands-on List II */
#include <stdio.h>
#include <signal.h>
#include <unistd.h>
int main(void){struct sigaction a={0};a.sa_handler=SIG_IGN;sigemptyset(&a.sa_mask);sigaction(SIGINT,&a,NULL);puts("Namesh: SIGINT ignored for 5 seconds");sleep(5);a.sa_handler=SIG_DFL;sigaction(SIGINT,&a,NULL);puts("Default restored; press Ctrl+C");while(1)pause();}
