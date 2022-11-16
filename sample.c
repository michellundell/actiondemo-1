#include <stdio.h>
#include "fx.h"

int sample(int x)
{
  printf("hello\n");
  fx();
  printf("hello again\n");
  return( x - 1 );
}
