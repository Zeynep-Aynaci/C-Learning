#include <stdio.h>

int getsquare(double* ptr);

int main()
{
    double result,number;
    printf("enter a number :");
    scanf("%lf",&number);
    result=getsquare(&number);
    printf("square of number: %.2lf",result);
   return 0;
}

int getsquare(double* ptr){
    return *ptr * *ptr;
}
