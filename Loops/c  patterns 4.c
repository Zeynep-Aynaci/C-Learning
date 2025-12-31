#include <stdio.h>

int main()
{
    printf("***Arrow sign with letter***\n\n");
   int i,j,rows,a=0;
   char letter;
   printf("enter a letter : ");
   scanf("%c",&letter);
   printf("enter a odd number of rows : ");
   scanf("%d",&rows);
   while(rows%2==0){
       printf("please enter a odd number : ");
       scanf("%d",&rows);
   }

   for(i=0;i<rows;i++){

       if(i<=rows/2)
        a ++ ;
       else{
        a -- ;
       }
       for(j=1;j<=a;j++){
           printf(" ");
       }

       printf("%c\n",letter);
   }

    return 0;
}
