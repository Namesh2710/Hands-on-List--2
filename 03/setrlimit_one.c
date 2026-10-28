/* Name: Namesh | System Software-II Hands-on List II */
#include <stdio.h>
#include <sys/resource.h>
int main(void){struct rlimit r;if(getrlimit(RLIMIT_NOFILE,&r)<0){perror("getrlimit");return 1;}printf("Before soft=%llu hard=%llu\n",(unsigned long long)r.rlim_cur,(unsigned long long)r.rlim_max);r.rlim_cur=(r.rlim_max!=RLIM_INFINITY&&r.rlim_max<64)?r.rlim_max:64;if(setrlimit(RLIMIT_NOFILE,&r)<0){perror("setrlimit");return 1;}puts("Namesh: open-file soft limit updated.");return 0;}
