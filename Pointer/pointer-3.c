#include <stdio.h>
#include<math.h>

float* squareRoot(float* ptr);
int main()
{
   float number;
   float* ptr;
   printf("please enter a number : ");
   scanf("%f",&number);
   ptr=squareRoot(&number);
   printf("square root of number : %.2f",*ptr);

    return 0;
}

float* squareRoot(float* ptr){
    *ptr=sqrt(*ptr);
    return ptr;
}
