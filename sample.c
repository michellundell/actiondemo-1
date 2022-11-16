#include <stdio.h>
#include "fx.h"

int sample(int x)
{
  printf("hello running with x = %d\n",x);
  fx();
  printf("returning(%d)\n",x-1);
  return( x - 1 );
}
