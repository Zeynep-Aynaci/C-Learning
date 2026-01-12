#include<stdlib.h>
#include<stdio.h>

int main() {
    int size,i,eleman,found=1;

    printf("input array size (0-10) : ");
    scanf("%d",&size);
    int array[size];
    printf("\n input array elements : ");
    for(i=0;i<size;i++){
        scanf("%d",& *(array+i));
    }
     printf("\n input the eleman search : ");
     scanf("%d",&eleman);
     for(i=0;i<size;i++){
         if(eleman==*(array+i)){
             printf("%d exist in the array at index %d",eleman,i);
             found=0;
             break;
         }
     }

     if(found==1){
             printf("%d does not exist in the array.",eleman);
         }


    return 0;
}
