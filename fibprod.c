
#include "fibprod.h"

int fibprod(int n1, int n2)
{
  int v1, v2;
  v1 = fibo(n1);
  v2= fibo(n2);
  return v1*v2;
}
