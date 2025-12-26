#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int fib(int);


int main(){

 for(int i=0;i<15;i++){

    printf("%d\n",fib(i));
 }                            // lab work 1//
return 0;
}


int fib(int x){
    if(x==0){
    return 0;
    }
    else if(x==1){
    return 1;
    }
    else{
    return fib(x-1) + fib(x-2);
    }

}
