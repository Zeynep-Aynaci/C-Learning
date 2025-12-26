#include<stdlib.h>
#include<stdio.h>
#include<math.h>


int main (){

int num,digit;
digit=0;
printf("enter a number : ");
scanf("%d",&num);

if(num==0){
    digit=1;
}else{
    while(num!=0){
        num=num/10;
        digit++;
    }

}
 printf("%d",digit);





return 0;
}
