#include <stdio.h>



int main()
{
 int i,j,row,column;
 printf("please enter number of row : ");
 scanf("%d",&row);
 printf("please enter number of column : ");
 scanf("%d",&column);
 int array[row][column];
 printf("please enter the values : ");
 for(i=0;i<row;i++){
     for(j=0;j<column;j++){
         scanf("%d",&array[i][j]);

     }
 }
 printf("\n\n");
 for(i=0;i<row;i++){
     for(j=0;j<column;j++){
         printf("%4d  ",array[i][j]);
     }
     printf("\n\n");
 }

   return 0;
}
