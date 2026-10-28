/* Name: Namesh | System Software-II Hands-on List II */
#define _GNU_SOURCE
#include <stdio.h>
#include <unistd.h>
static void s(const char*n,int k){long v=sysconf(k);printf("%s: %ld\n",n,v);}
int main(void){
#ifdef _SC_ARG_MAX
s("Max exec arguments bytes",_SC_ARG_MAX);
#endif
#ifdef _SC_CHILD_MAX
s("Max simultaneous processes per user",_SC_CHILD_MAX);
#endif
#ifdef _SC_CLK_TCK
s("Clock ticks per second",_SC_CLK_TCK);
#endif
#ifdef _SC_OPEN_MAX
s("Max open files",_SC_OPEN_MAX);
#endif
#ifdef _SC_PAGESIZE
s("Page size",_SC_PAGESIZE);
#endif
#ifdef _SC_PHYS_PAGES
s("Physical memory pages",_SC_PHYS_PAGES);
#endif
#ifdef _SC_AVPHYS_PAGES
s("Available physical pages",_SC_AVPHYS_PAGES);
#endif
return 0;}
