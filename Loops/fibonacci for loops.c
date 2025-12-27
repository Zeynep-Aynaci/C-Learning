#include <stdio.h>

int main()
{
   printf("****FÝBONACCÝ****\n");
   int first,second,third,i,number;
   printf("please enter a number : ");
   scanf("%d",&number);
   first=1;
   second=1;
   third=0;
   for(i=1;i<=number;i++){
       first=second;
       second=third;
       third=first+second;
       printf("%d ",third);
   }

    return 0;
}
