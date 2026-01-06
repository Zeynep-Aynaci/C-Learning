#include <stdio.h>



int main()
{
 int i,j,size;
 printf("enter a size : ");
 scanf("%d",&size);
 int array[size][size];
 for(i=0;i<size;i++){
     for(j=0;j<size;j++){
         array[i][j]=0;
     }
 }
 for(i=0;i<size;i++){
     array[i][i]=1;
     array[i][size-i-1]=1;
 }
 for(i=0;i<size;i++){
     for(j=0;j<size;j++){
         printf("%d ",array[i][j]);
     }
     printf("\n");
 }

   return 0;
}
