#include<string.h>
#include <stdio.h>

void function(char*);

int main()
{
    char message[100];
    puts("Input your sentence : ");
    fgets(message,100,stdin);

    function(message);
    puts(message);

    return 0;
}

void function(char* ptr){
    int i;
    for(;*ptr!='\0';ptr++){
        if(*ptr>='A' && *ptr<='Z'){
            *ptr=*ptr+32;
        }
        else if(*ptr>='a' && *ptr<='z'){
            *ptr=*ptr-32;
        }
    }

}
