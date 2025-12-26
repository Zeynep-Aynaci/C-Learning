#include <stdio.h>

int main()
{
   int number,factorial=1;
   printf("please enter a number : ");
   scanf("%d",&number);
   for(int i=1;i<=number;i++){
       factorial=factorial*i;
   }
  printf("factorial of number that you entered : %d",factorial);
    return 0;
}
