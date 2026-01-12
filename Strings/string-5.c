#include<string.h>
#include <stdio.h>

void summery(char*);

int main()
{
    char message[100];
    puts("Input a sentence : ");
    fgets(message,100,stdin);
    summery(message);
    return 0;
}

void summery(char* ptr){
    int i=0;
    while(*(ptr+i)!='\0'){
        if(i==0) putchar(*ptr);
        if(*(ptr+i)==' '){
            putchar(*(ptr+i+1));
        }
        i++;
    }

}
