#include <stdio.h>

int main()
{
  printf("***PASCAL TRIANGLE***\n\n");
  int rows,space,i,j,number=1;
  printf("please enter number of rows : ");
  scanf("%d",&rows);
  for(i=0;i<rows;i++){
      for(space=1;space<=rows-i;space++){
          printf(" ");
      }
      for(j=0;j<=i;j++){
          if(j==0 || i==0){
              number=1;
          }else{
          number=number*(i-j+1)/j;}
          printf("%3d",number);
      }
      printf("\n");
  }

    return 0;
}
