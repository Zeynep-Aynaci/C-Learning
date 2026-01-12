#include<string.h>
#include <stdio.h>
#include <ctype.h>

void upperChar(char*,char*);

int main()
{   char name[40] ,surname[20];
    printf("Input your name : ");
    scanf("%s",&name);
    printf("Input your surname : ");
    scanf("%s",&surname);

   upperChar(name,surname);


 return 0;
}

void upperChar(char*ptr1,char*ptr2){
    int i;
    for(i=0;*(ptr1+i)!='\0';i++){
    *(ptr1+i)=toupper(*(ptr1+i));
    }
    for(i=0;*(ptr2+i)!='\0';i++){
    *(ptr2+i)=toupper(*(ptr2+i));
    }
    strcat(ptr1,ptr2);
    printf("hello ");
    for(i=0;*(ptr1+i)!='\0';i++){
        printf("%c ",*(ptr1+i));
    }

}
