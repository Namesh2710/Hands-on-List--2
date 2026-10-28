/* Name: Namesh | System Software-II Hands-on List II */
#include <stdio.h>
#include <unistd.h>
#if defined(__i386__) || defined(__x86_64__)
static unsigned long long rdtsc(void){unsigned a,d;__asm__ volatile("lfence; rdtsc":"=a"(a),"=d"(d)::"memory");return ((unsigned long long)d<<32)|a;}
#else
#error "Requires x86/x86-64"
#endif
int main(void){volatile pid_t p=0;unsigned long long a=rdtsc();for(int i=0;i<100;i++)p=getppid();unsigned long long b=rdtsc();printf("Namesh: 100 getppid calls = %llu TSC ticks (last PID %ld)\n",b-a,(long)p);return 0;}
