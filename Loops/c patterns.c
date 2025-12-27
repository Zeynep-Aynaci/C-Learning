#include <stdio.h>

int main()
{

  int i,j,number;
  printf("please enter a number : ");
  scanf("%d",&number);
  printf("\n***Piramit 1***\n");
  for(i=1;i<=number;i++){
      for(j=1;j<=i;j++){
          printf("%d",i);
      }
      printf("\n");
  }
   printf("\n***Piramit 2***\n");

  for(i=number;i>=1;i--){
      for(j=number;j>=i;j--){
          printf("%d",i);
      }
      printf("\n");
  }




    return 0;
}
