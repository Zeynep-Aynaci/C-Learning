#include<stdlib.h>
#include <stdio.h>
#include<math.h>
#include<time.h>
int main(){
    int array[10];
    printf("enter the values of parameters:");
    for(int i=0;i<10;i++){
        scanf("%d",&array[i]);
    }
    printf("element\t value\t stars\n");
    for(int i=0;i<10;i++){
        printf("%d\t %d\t",i,array[i]);
        for(int j=0;j<array[i];j++){
            printf("*");

        }
        printf("\n");
    }

    return 0;
}
