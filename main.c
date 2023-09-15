#include "io430.h"
#include <stdio.h>
#include "fibofile.h"
#include "fibprod.h"
#include "datatypes.h"
#define INIT_VALUE 0
int main( void )
{
  // Stop watchdog timer to prevent time out reset
  WDTCTL = WDTPW + WDTHOLD;
  
  //CLASS 1
  
  /*
  int x= 0xF0;
  int y= 0x0F;
  if (x&y)
  printf("BITWISE!=0\n");
else 
  printf("BITWISE=0\n"); ->this gets printed
  
  if(x&&y)
  printf("LOGIC !=0\n"); -> this gets printed. Bcoz both x and y are non-zero numbers
else
  printf("LOGIC=0\n;");
  */
  //  printf("hello\n");
  // printf("%d\n",fibo(10));
  // for (int i=1; i<=10;i++)
  //   printf("%d\n",fibo(i));
  
  //CLASS 2
  
 // printf("%d",fibo(4));
  //printf("%d",fibprod(4,3));
  
  //write an equivalent while loop and do-while loop for the below code snippets.
  //for(int i=0; i<50; i++)
  //printf("i= %d\n",i);
  
  int i=INIT_VALUE;
  
  while(i<50)
  {
    printf("i=%d\n",i);
    i++;
  }
  i=INIT_VALUE;
  do
  {printf("%d\n",i);
  i++;
  }while(i<50);
  
  return 0;
}


