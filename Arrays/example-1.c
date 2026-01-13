#include<string.h>
#include <stdio.h>
#include <ctype.h>
void printstars(int arr[],int);

int main()
{
    int numbers[]={7,3,5,9,10,6,17,19,11};
    int size=9;
    printstars(numbers,size);

 return 0;
}

void printstars(int arr[],int size){
    int i,j;
    for(i=0;i<size;i++){
        printf("%d\t",i);
        printf("%d\t",arr[i]);
        for(j=0;j<arr[i];j++){
            printf("*");
        }
        printf("\n");
    }
}
