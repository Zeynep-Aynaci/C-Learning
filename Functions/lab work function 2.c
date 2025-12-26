#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int fib(int n);

int main(){
for(int i=0;fib(i)<100;i++){
    printf("%d\n",fib(i));
}
return 0;               // lab work 2//
}

int fib(int n){
if(n==0){
    return 0;
}else if(n==1){
return 1;}
else{return fib(n-1) + fib(n-2);}
}


