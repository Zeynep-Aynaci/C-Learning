#include<string.h>
#include <stdio.h>



int main()
{
    char words[3][16];
    int i,j;
    for(i=0;i<3;i++){
        printf("Input a word : ");
        scanf("%15s",& words[i]);
    }
    for(i=0;i<3;i++){
        for(j=0;words[i][j]!='\0';j++){
           printf("%c ",words[i][j]);
        }
    }


    return 0;
}
