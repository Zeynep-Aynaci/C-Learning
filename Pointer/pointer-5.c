#include <stdio.h>
void characterscrooll(char*,int);

int main()
{
    char character[7]={'y','a','z','i','l','i','m'};
    int size=sizeof(character)/ sizeof(character[0]);
    characterscrooll(character,size);
    return 0;
}

void characterscrooll(char*character,int size){
    int i,j;
    for(i=0;i<=size;i++){
        for(j=i;j<size;j++){
            printf("%c",*(character+j));
        }
        for(j=0;j<i;j++){
            printf("%c",*(character+j));
        }
        printf("\n");
    }
}
