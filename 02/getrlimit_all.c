/* Name: Namesh | System Software-II Hands-on List II */
#include <stdio.h>
#include <sys/resource.h>
static void show(int r,const char*n){struct rlimit x;if(getrlimit(r,&x)<0){perror(n);return;}printf("%s soft=%llu hard=%llu\n",n,(unsigned long long)x.rlim_cur,(unsigned long long)x.rlim_max);}
int main(void){show(RLIMIT_CPU,"CPU");show(RLIMIT_FSIZE,"file size");show(RLIMIT_DATA,"data");show(RLIMIT_STACK,"stack");show(RLIMIT_CORE,"core");show(RLIMIT_NOFILE,"open files");show(RLIMIT_NPROC,"processes");show(RLIMIT_AS,"address space");return 0;}
