#include <stdio.h>

int main()
{
    int i,j,number;
    printf("please enter a number : ");
    scanf("%d",&number);
    printf("\n***piramit 1***\n");
    for(i=1;i<=number;i++){

        for(j=number;j>=i;j--){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("* ");
        }

        printf("\n");
    }
    printf("\n***piramit 2***\n");

     for(i=1;i<=number;i+=2){

        for(j=number;j>=i;j--){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("* ");
        }

        printf("\n");
    }


    return 0;
}
