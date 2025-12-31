#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <time.h>
#include <ctype.h>
int main()
{
  int number1,number2,number3,number4,number5,number6;
  printf("please enter a number : ");
  scanf("%d",&number1);
  printf("\n the number you entered is :%c\n",number1);
  if(isalnum(number1))    // A-Z , a-z , 0-9
    printf("correct\n");
    else{
        printf("wrong\n");
    }

  printf("\nplease enter a number : ");
  scanf("%d",&number2);
  printf("\n the number you entered is :%c",number2);
   if(isalpha(number2))   //A-Z , a-z
   printf("correct\n");
   else{
       printf("wrong\n");
   }


   printf("please enter a number : ");
  scanf("%d",&number3);
  printf("\n the number you entered is :%c",number3);
  if(isdigit(number3))    //  0-9
    printf("correct\n");
    else{
        printf("wrong\n");
    }

   printf("please enter a number : ");
  scanf("%d",&number4);
  printf("\n the number you entered is :%c",number4);
  if(islower(number4))    // a-z
    printf("correct\n");
    else{
        printf("wrong\n");
    }

    printf("please enter a number : ");
  scanf("%d",&number5);
  printf("\n the number you entered is :%c",number5);
  if(isupper(number5))    // A-Z
    printf("correct\n");
    else{
        printf("wrong\n");
    }

    printf("please enter a number : ");
  scanf("%d",&number6);
  printf("\n the number you entered is :%c",number6);
  if(isspace(number6))    // it checks whether there is a space
    printf("correct\n");
    else{
        printf("wrong\n");
    }

    printf("%c\n",toupper('a'));
    printf("%d\n",toupper('a'));
    printf("%c\n",tolower('A'));
    printf("%d\n",tolower('A'));



    return 0;
}
