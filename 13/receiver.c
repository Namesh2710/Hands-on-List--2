/* Name: Namesh | System Software-II Hands-on List II */
#include <stdio.h>
#include <signal.h>
#include <unistd.h>
int main(void){printf("Namesh receiver PID=%ld\n",(long)getpid());if(signal(SIGSTOP,SIG_IGN)==SIG_ERR)perror("signal SIGSTOP");while(1)pause();}
