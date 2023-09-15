#include "fibofile.h"

#include<stdio.h>
int fibo(unsigned long int n)
{
   int a=0,b=1,temp;   int i; 
   if(n==1)
     return a;
   if(n==2)
   {
     return b;
   }
 
   for(i=3; i<=n ;i++){
         temp=b;  
         b = a + b;
         a = temp;    
   }
   return b;
}