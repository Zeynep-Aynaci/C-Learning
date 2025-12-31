#include <stdio.h>

int main()
{
    printf("***PERFECT NUMBER***\n\n");

    unsigned long long i,j,number,sum=0;
    printf("please enter a number : ");
    scanf("%llu",&number);
    for( i=1;i<=number;i++){
        sum=0;
        for( j=1;j<=i/2;j++){
            if(i%j==0){
                sum+=j;
              }
          }
        if(sum==i){
                printf("%llu is a perfect number.\n",i);
            }
    }

    return 0;
}
