#include <stdio.h>
#define MAX(number1,number2) (number1>number2)? number1:number2
#define MIN(number1,number2) (number1<number2)? number1:number2
#define AREA_OF_RECTANGLE(x,y) (x*y)

int main()
{
   printf("MAX(5,9):%d\n",MAX(5,9));
   printf("MIN(9,2):%d\n",MIN(9,2));
   printf("AREA_OF_RECTANGLE(5,6):%d",AREA_OF_RECTANGLE(5,6));

#undef AREA_OF_RECTANGLE(x,y)

    return 0;
}
