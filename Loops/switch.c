#include <stdio.h>
#include <stdlib.h>

/*int main()
{
    float num1,num2,result;
    char myoperator;

    printf("please enter two numbers : ");
    scanf("%f%f",&num1,&num2);

    printf("choose an operator(+,-,/,*): ");
    scanf(" %c",&myoperator);

    printf(" my operator=%c\n my number 1=%f \n my number 2= %f\n",myoperator,num1,num2);

    switch(myoperator){
        case '/':printf("my result is : %f",num1/num2);break;
        case '+':printf("my result is : %f",num1+num2);break;
        case '-':printf("my result is : %f",num1-num2);break;
        case '*':printf("my result is : %f",num1*num2);break;
        default:printf("you entered the wrong operator\n");
    }


 return 0;
}


 int main()
{
    int mynumber,result;
    printf("enter a number : ");
    scanf("%d",&mynumber);

    switch(mynumber%2){
        case 0:printf("this is an even number");break;
        case 1:printf("this is an odd number");break;
    }

 return 0;
}
int main()
{
    char letter;
    printf("enter a letter : ");
    scanf("%c",&letter);

    switch(letter){
    case 'a':
    case 'e':
    case 'o':
    case 'ö':
    case 'i':printf("%c is vowel",letter);break;
    default:printf("%c is consonant",letter);break;
    }
return 0;
}*/
int main()
{
    int monthNumber;
    printf("enter a monthNumber : ");
    scanf("%d",&monthNumber);

    switch(monthNumber){
        case 4:
        case 6:
        case 9:
        case 11:printf("this month is 30 day.");break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:printf("this month is 31 day.");break;
        case 2:printf("this month is 28 or 29 day ");break;
        default:printf(" there is no %d th month. ",monthNumber);break;
    }



  return 0;
}
