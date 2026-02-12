#include <string.h>
#include<stdlib.h>
#include <stdio.h>

void reverse_func(char*,int);

int main()
{
     char message[100];
     puts("enter a sentence");
     fgets(message,100,stdin);
     int size;
     size=strlen(message);
     reverse_func(message,size);

    return 0;
}

void reverse_func(char* ptr,int size){
    int i;
    char temp;
    for(i=0;i<size/2;i++){
        temp=*(ptr+i);
        *(ptr+i)=*(ptr+size-1-i);
        *(ptr+size-1-i)=temp;
    }
    puts(ptr);
}
