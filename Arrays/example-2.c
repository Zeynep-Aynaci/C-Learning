#include<string.h>
#include <stdio.h>
#include <ctype.h>
void findmin(int array[],int size);

int main()
{
    int array[]={11,34,56,7,8,1,9};
    int size=7;
    findmin(array,size);

 return 0;
}

void findmin(int array[],int size){
    int i,biggest=0,smallest=100;
    for(i=0;i<size;i++){
        if(array[i]<smallest){
            smallest=array[i];
        }if(array[i]>biggest){
            biggest=array[i];
        }
    }
    printf("biggest : %d\n",biggest);
    printf("smallest: %d",smallest);
}
