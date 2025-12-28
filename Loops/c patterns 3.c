#include<stdlib.h>
#include<stdio.h>

int main()
{
    char character='A';
    char letter;
    printf("please enter uppercase letter : ");
    scanf("%c",&letter);
    for(int i=1;i<=letter-'A'+1;i++){
        for(int j=1;j<=i;j++){
            printf("%c",character);
        }
        character++;
        printf("\n");
    }



    return 0;
}
