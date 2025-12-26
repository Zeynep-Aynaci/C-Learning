#include<stdlib.h>
#include <stdio.h>
#include<math.h>
#include<time.h>

int main(){
    int matrix[4][6];
    int i,j;
    for(i=0;i<4;i++){
        for(j=0;j<6;j++){
            matrix[i][j]=i+j;
            printf("%d  ",matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
