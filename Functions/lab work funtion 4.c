#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int prime(int x);

int main(){
for(int i=2;i<100;i++){
        if(prime(i)){
            printf("%d is a prime number\n",i);
          }
        }
return 0;                  //lab work 4//
}


int prime(int x){

for(int j=2;j<=x/2;j++){
      if(x%j==0){
        return 0;
      }
   }
   return 1;

}
