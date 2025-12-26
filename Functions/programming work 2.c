#include<stdlib.h>
#include<stdio.h>
#include<math.h>

void printnumber(int x);

int main(){
int num;
printf("enter a number :");
scanf("%d",&num);
printnumber(num);

return 0;
}
        

void printnumber(int x){
for (int i=1;i<=x;i++){

    for(int j=1;j<=i;j++){
        printf("%d ",j);
    }

    printf("\n");
  }
}
