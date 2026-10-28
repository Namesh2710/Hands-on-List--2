/* Name: Namesh | System Software-II Hands-on List II */
#define _DEFAULT_SOURCE
#include <stdio.h>
#include <signal.h>
#include <sys/time.h>
#include <unistd.h>
static volatile sig_atomic_t count;
static void h(int s) { (void)s; ++count; }
int main(void) {
 struct sigaction sa={0}; sa.sa_handler=h; sigemptyset(&sa.sa_mask);
 if(sigaction(SIGVTALRM,&sa,NULL)<0){perror("sigaction");return 1;}
 struct itimerval t={{0,10},{10,0}};
 if(setitimer(ITIMER_VIRTUAL,&t,NULL)<0){perror("setitimer");return 1;}
 printf("Namesh: ITIMER_VIRTUAL set: 10s initial, 10us interval. Ctrl+C to stop.\n");
 for(;;){pause();printf("signals=%d\n",(int)count);}
}
