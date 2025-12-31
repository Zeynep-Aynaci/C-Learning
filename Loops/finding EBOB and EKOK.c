#include <stdio.h>

int main()
{
    int i,big,small,num1,num2,OBEB=0,EKOK=0;
    printf("enter a two number : ");
    scanf("%d%d",&num1,&num2);
    if(num1<num2){
    small=num1;
    big=num2;
    }
    else{
        small=num2;
        big=num1;
    }
    for(i=2;i<=small;i++){
        if(small%i==0 && big%i==0){
            OBEB=i;
        }
    }
    if(OBEB==0){
    printf("there is no obeb\n");}
    else{
        printf("\nOBEB of %d and %d is : %d\n\n",small,big,OBEB);
    }


     EKOK=big;
    while(EKOK%small!=0){
        EKOK+=big;
    }
    printf("EKOK of %d and %d is : %d\n ",num1,num2,EKOK);



    return 0;
}
