#include <string.h>
#include<stdlib.h>
#include <stdio.h>

void summery(char*);

int main()
{
    char mymessage[100];
    puts("enter a sentence : ");
    gets(mymessage);
    summery(mymessage);

    return 0;
}

void summery(char* ptr){
    putchar(*(ptr));
    for(;*ptr!='\0';ptr++){
        if(*ptr==' '){
            putchar(*(ptr+1));
        }else{
            continue;
        }
    }
}
