#include <string.h>
#include<stdlib.h>
#include <stdio.h>

void howmany(char*,int*);

int main()
{ char message[100];
int numbers[26];
int i;
for(i=0;i<26;i++){
    numbers[i]=0;
}
puts("enter a sentence : ");
fgets(message,100,stdin);
howmany(message,numbers);
for(i=0;i<26;i++){
    printf("%c/%c:%d\n",'A'+i,'a'+i,numbers[i]);
}

    return 0;
}
void howmany(char* ptr,int* numb){
    for(;*ptr!='\0';ptr++){
        if(*ptr>='A' && *ptr<='Z'){
            numb[*(ptr)-'A']++;
        }else{
            numb[*(ptr)-'a']++;
        }
    }
}
