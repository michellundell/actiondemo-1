#include <stdio.h>
#include <string.h>
#include "sample.h"

int main(int argc, char **argv)
{
    printf("Thanks for purchasing this expensive program\n");
  
    char buff[15];
    int pass = 0;

    printf("\n Enter the password : \n");
    gets(buff);

    if(strcmp(buff, "thesecretpassword"))
    {
        printf ("\n Wrong Password \n");
    }
    else
    {
        printf ("\n Correct Password \n");
        pass = 1;
    }

    if(pass)
    {
       /* Now Give root or admin rights to user*/
        printf ("\n Root privileges given to the user \n");
    }

     int ret = sample(1);
     return ret;
}
