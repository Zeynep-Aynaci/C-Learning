#include<stdlib.h>
#include <stdio.h>
#include<math.h>
#include<time.h>
 #include <stdio.h>

int main()
{
    char array[3][12];
    for(int i=0;i<3;i++){
        printf("Input a word :");
        scanf("%s",array[i]);
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<array[i][j];j++){
            printf("%c",array[i][j]);
        }
    }



    return 0;
}
