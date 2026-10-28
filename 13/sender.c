/* Name: Namesh | System Software-II Hands-on List II */
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
int main(int c,char**v){if(c!=2){fprintf(stderr,"Usage: %s PID\n",v[0]);return 2;}if(kill((pid_t)atoi(v[1]),SIGSTOP)<0){perror("kill");return 1;}puts("SIGSTOP sent; resume with kill -CONT PID");return 0;}
