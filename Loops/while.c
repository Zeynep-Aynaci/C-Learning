#include<stdio.h>
#include<stdlib.h>
int main()
{
  /* int i,mynumber;
   mynumber=0;
   i=1;
   printf("please enter a number 1 to 10 : ");
   scanf("%d",&mynumber);

   if(mynumber<1 || mynumber>10){
    printf("please enter a number 1 to 10");
    scanf("%d",&mynumber);
    }
   while(i<=10){
    printf("%d*%d=%d\n",mynumber,i,mynumber*i);
    i++;
   }*/

   int num,i;
   i=2;
   printf("enter a number :");
   scanf("%d",&num);

   while(i<=num/2){
     if(num%i==0){
        continue;
     }
     i++;
   }
   printf("%d\n",num);
     num--;



    return 0;
}
