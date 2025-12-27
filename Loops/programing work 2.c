#include <stdio.h>

int main()
{
    int biggest=0,smallest=100,howmany_num,number;
    printf("tell me how many numbers to enter : ");
    scanf("%d",&howmany_num);
    printf("enter the numbers :");
    for(int i=1;i<=howmany_num;i++){
        scanf("%d",&number);
        if(number<smallest){
            smallest=number;
        }if(number>biggest){
            biggest=number;
        }
    }
    printf("the smallest number is : %d\n",smallest);
    printf("the biggest number is : %d",biggest);

    return 0;
}
