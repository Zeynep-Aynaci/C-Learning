#include <stdio.h>
#include<math.h>
float* squareroot(float*ptr);

int main()
{
 float number;
 float* ptr;
 printf("please enter a positive  number : ");
 scanf("%f",&number);
 ptr=squareroot(&number);
 printf("squareroot of number : %.2f",*ptr);

    return 0;
}

float* squareroot(float* ptr){
    *ptr=sqrt(*ptr);
    return ptr;
}
