#include<stdlib.h>
#include <stdio.h>
#include <time.h>


int main()
{
    int numbers[3][3][3];
    int i,j,k;
    srand(time(NULL));
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
                numbers[i][j][k]= rand () % 10;
            }
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
                printf("%d",numbers[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }



 return 0;
}
