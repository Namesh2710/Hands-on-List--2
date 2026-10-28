/* Name: Namesh | System Software-II Hands-on List II */
#define _GNU_SOURCE
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/resource.h>
int main(void){struct rlimit r;if(getrlimit(RLIMIT_NOFILE,&r)<0){perror("getrlimit");return 1;}printf("Namesh open-file soft limit=%llu\n",(unsigned long long)r.rlim_cur);int p[2];if(pipe(p)<0){perror("pipe");return 1;}
#ifdef F_GETPIPE_SZ
int n=fcntl(p[0],F_GETPIPE_SZ);if(n<0)perror("F_GETPIPE_SZ");else printf("Pipe capacity=%d bytes\n",n);
#else
puts("F_GETPIPE_SZ unavailable");
#endif
close(p[0]);close(p[1]);return 0;}
