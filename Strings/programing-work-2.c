#include<string.h>
#include <stdio.h>

void reverseString(char* ptr);

int main()
{

    char str[10] = "this is C";
    reverseString(str);
    puts(str);

return 0;
}

void reverseString(char* ptr){
    int i;
    char a;
    int size=strlen(ptr);
        for(i=0;i<size/2;i++){
         a=*(ptr+i);
        *(ptr+i)=*(ptr+(size-1-i));
        *(ptr+(size-1-i))=a;
        }
}
