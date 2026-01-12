#include<string.h>
#include <stdio.h>

void countletter(char*,int howmany[]);

int main()
{
    int howmany[26];
    char message[100];
    puts("Input a sentence : ");
    fgets(message,100,stdin);
    countletter(message,howmany);

    return 0;
}

void countletter(char* ptr,int howmany[]){
    int i;
    for(i=0;i<26;i++){
        howmany[i]=0;
    }
    for(i=0;*(ptr+i)!='\0';i++){

        if(*(ptr+i)>='A' && *(ptr+i)<='Z'){
            howmany[(int)*(ptr+i)-'A']++;
        }
        if(*(ptr+i)>='a' && *(ptr+i)<='z'){
            howmany[(int)*(ptr+i)-'a']++;
        }
    }
    for(i=0;i<26;i++){
        printf("%c/%c:%d\n",'A'+i,'a'+i,howmany[i]);
    }

}
