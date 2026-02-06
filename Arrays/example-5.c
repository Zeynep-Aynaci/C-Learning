#include <stdio.h>

int main()
{
    int row,column,i,j;
    printf("please enter the number of row(should be odd number): ");
    scanf("%d",&row);
    while(row%2==0){
        printf("please enter the odd number :");
        scanf("%d",&row);
    }
    printf("\n please enter the number of column(should be odd number):");
    scanf("%d",&column);
    while(column%2==0){
        printf("please enter the odd number :");
        scanf("%d",&column);
    }
    int array[row][column];
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            printf("array[%d][%d] :",i,j);
            scanf("%d",&array[i][j]);
        }
    }
    printf("\n\n");
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            printf("%4d",array[i][j]);
        }
    printf("\n");
    }


    return 0;
}
