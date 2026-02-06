#include <stdio.h>

int main()
{
    int array1[3][3];
    int array2[3][3];
    int result[3][3];
int i,j,k,sum=0;
printf("\n please enter array1 elements  \n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("array1[%d][%d] : ",i,j);
        scanf("%d",&array1[i][j]);
    }
}
printf("\n please enter array2 elements  \n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("array2[%d][%d] : ",i,j);
        scanf("%d",&array2[i][j]);
    }
}
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        for(k=0;k<3;k++){
        sum+=array1[i][k]*array2[k][j];
        }
        result[i][j]=sum;
        sum=0;
    }
}
printf("\n\n******** result matrix ********\n\n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("%4d",result[i][j]);
    }
    printf("\n");
}

    return 0;
}
