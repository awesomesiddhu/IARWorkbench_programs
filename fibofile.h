#ifndef _FIB_H
#define _FIB_H
  int fibo(unsigned long int);
#endif

/* the reason this is done is because in the old C89 compiler, if we 
included fibofile.h in both main.c and fibprod.h, we would get an error bcoz the 
function fibo was included twice.
Using this avoids that error bcoz if the function is already defined, it will skip 
over the lines when declared a second time.*/

