#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int prime(int x);

int main (){
    int num;
    printf("enter a number : ");
    scanf("%d",&num);
    if(prime(num)) {
        printf("%d is a prime number",num);
    }else{
        printf("%d is not a prime number",num);
    }
  return 0;
  }                         //lab work 3 function//


  int prime (int x){
  if(x<=1){
    return 0;
  }
  for(int i=2;i<x/2;i++){
       if(x%i==0){
          return 0;
      }else {
          return 1;}
      }
 }
