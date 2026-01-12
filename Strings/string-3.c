#include<string.h>
#include <stdio.h>

int wordscount(char*);
int main()
{
    char message[100];
    puts("Input your sentence : ");
    fgets(message,100,stdin);

    printf("number of words: %d ",wordscount(message));

    return  0;
}

int wordscount(char* ptr){
    int mywords=0;
    int i=0;
    while(ptr[i]!='\0'){
        if(ptr[i]==' '){
            mywords++;
        }
      i++;
    }
    return mywords+1;
}
