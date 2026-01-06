#include <stdio.h>



int main()
{
 int number=9;
 char name='F';
 char* ptrr=&name;
 printf("number variable adress: %x\n",&number);
 printf("name variable adress:%x\n",&name);
 printf("%c\n\n",*ptrr);


 int x=7;
int* ptr=&x;
printf("x variable adress: %x\n",&x);
printf("x variable adress:%x\n",ptr);
printf("ptr variable adress:%x\n",&ptr);
printf("x variable:%d",*ptr);


   return 0;
}
