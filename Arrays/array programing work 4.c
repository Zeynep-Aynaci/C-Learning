#include<stdlib.h>
#include <stdio.h>
#include<math.h>
#include<time.h>
int main()
{
    int array[3][3][3];
    srand(time(NULL));
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                array[i][j][k]=rand()%9;
                printf("%d \t",array[i][j][k]);
            }
           printf("\n\n");
        }
       printf("\n\n");
    }
return 0;
}
