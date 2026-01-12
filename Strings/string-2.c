#include<string.h>
#include <stdio.h>

int findlength(char*);
int main()
{

    char message[100];
    puts("Input your message : ");
    fgets(message,100,stdin);
    printf("length : %d\n\n",findlength(message));

    printf("%d",strlen(message)-1);

    return 0;
}

int findlength(char* ptr){
    int i=0;
    while(ptr[i]!='\0'){
        i++;
    }
    return i-1;
}
