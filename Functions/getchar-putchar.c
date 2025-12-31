#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include<time.h>

int main()
{
   char mykey;
   printf("please press any key : ");
   mykey=getchar();
   printf("you pressed the %c key.\n",mykey);
   printf("The ASCII code of the key is %d.",mykey);

   for(int i=65;i<=90;i++){
       putchar(i);
       putchar(32);
   }

    return 0;
}
