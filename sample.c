#include <stdio.h>
#include "fx.h"

int sample(int x)
{
  printf("hello running with x = %d\n",x);
  fx();
  printf("returning(%d)\n",0);
  return( 0 );
}
