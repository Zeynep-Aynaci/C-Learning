#include<stdlib.h>
#include<stdio.h>
#include<math.h>
void func();

int main(){
 func();
return 0;
}


void func(){
for(int i=1;i<=5;i++){

    for(int j=1;j<=5;j++){  
        printf("*");}

       printf("\t\t");

    for(int j=1;j<=5;j++){
        printf("&");}

  printf("\n");
      }
}



