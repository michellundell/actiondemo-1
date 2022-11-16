#include <stdio.h>
#include "fx.h"

int main(int argc, char **argv)
{
  printf("hello\n");
  fx();
  printf("hello again\n");
  return( argc - 1 ); /* if no arguments it return 1-1=0, if one argument it returns 2-1=1 */
}
