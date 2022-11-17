#include <stdio.h>
#include "fx.h"

int copy_buf (char *to, int pos, char *from, int len)
{
    int i;
    for (i=0;i<len;<i++){
         to[pos] = from [i];
         pos++;
    }
    return pos
}

int sample(int x)
{
  char *tobuf="000000";
  char *frombuf="12345678910";
  printf("sample(%d)\n",x);
  fx();
  copy_buf(tobuf,3,frombuf,4);
  printf("returning(%d)\n",0);
  return( 0 );
}
