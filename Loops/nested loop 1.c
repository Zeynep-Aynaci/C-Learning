#include <stdio.h>

int main()
{
    int number,i,j;
    printf("please enter a number : ");
    scanf("%d",&number);
   for( i=1;i<=number;i++){
       for( j=1;j<=i;j++){
           printf("*");

       }
       printf("\n");
   }
   printf("\n Triangle \n\n");

   for( i=1;i<=number;i++){
       for( j=number;j>=i;j--){
           printf("*");
       }
       printf("\n");
   }
    return 0;
}
