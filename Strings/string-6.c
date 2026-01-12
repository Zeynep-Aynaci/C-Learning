#include<string.h>
#include <stdio.h>

void reversewritten(char* ptr,int);

int main()
{
    int size;
    char message[100];
    puts("Input a sentence");
    fgets(message,100,stdin);
    size = strlen(message)-1;
    reversewritten(message,size);
    puts(message);

    return 0;
}

void reversewritten(char* ptr,int size){
    char a;
    int i;
    for(i=0;i<size/2;i++){
        a=*(ptr+i);
        *(ptr+i)=*(ptr + (size-1-i));
        *(ptr + (size-1-i))=a;
    }
}
