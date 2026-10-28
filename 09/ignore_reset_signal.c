/* Name: Namesh | System Software-II Hands-on List II */
#include <stdio.h>
#include <signal.h>
#include <unistd.h>
int main(void){signal(SIGINT,SIG_IGN);puts("Namesh: SIGINT ignored for 5 seconds");sleep(5);signal(SIGINT,SIG_DFL);puts("Default action restored; press Ctrl+C");while(1)pause();}
