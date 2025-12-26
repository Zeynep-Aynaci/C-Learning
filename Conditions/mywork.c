#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int mynumber;
    float square_root;
    printf("please enter a number : ");
    scanf("%d",&mynumber);
    if (mynumber<0){
            printf("please enter a positive number ");
    }
    else{
    square_root=sqrt(mynumber);
    }
        if(square_root*square_root==mynumber){
                printf("square root of my number is integer number");
        }
        else{
                printf("square root of my number is not integer number");
        }


   return 0;
}
