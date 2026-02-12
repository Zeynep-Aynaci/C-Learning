#include <string.h>
#include<stdlib.h>
#include <stdio.h>

void upperToLower(char*);
void lowerToUpper(char*);

int main()
{
    char mymessage[100];
    int choice;
    puts("make a choice : ");
    puts("1- upper to lower");
    puts("2-lower to upper");
    scanf("%d",&choice);
    getchar();
    switch(choice){
        case 1: puts("enter a sentence in all capital letters :");
                 gets(mymessage);
                 upperToLower(mymessage);
        break;
        case 2: puts("enter a sentence in all lowercase letters : ");
                 gets(mymessage);
                 lowerToUpper(mymessage);
        break;
        default:puts("wrong choice");
    }
    return 0;
}
void upperToLower(char* ptr){
 for(;*(ptr)!='\0';ptr++){
     if(*ptr>='A' && *ptr<='Z'){
         putchar(*ptr+32);
     }else{
         putchar(*ptr);
     }
 }

}

void lowerToUpper(char* ptr){
    for(;*ptr!='\0';ptr++){
        if(*ptr>='a' && *ptr<='z'){
            putchar(*ptr-32);
        }else{
            putchar(*ptr);
        }
    }

}
