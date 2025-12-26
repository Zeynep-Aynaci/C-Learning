#include<stdlib.h>
#include <stdio.h>
#include<math.h>
#include<time.h>       //girilen dizi sayýlarýný sýralayan program
void sort();
void write_the_array();

int reverse,array[7]={0};
int i;

int main()
{
    printf("write the array numbers:");
    for(i=0;i<7;i++){
    scanf("%d\n",&array[i]);
    }
    printf("\nBefore sorting\n\n");
    write_the_array();
    printf("\nThe array is sorting...\n\n");
    sort();
    printf("\nAfter sorting\n");
    write_the_array();


    return 0;
}

void sort(){
    for(i=0;i<7;i++){
        for(int j=i+1;j<7;j++){
            if(array[j]<array[i]){
                reverse=array[i];
                array[i]=array[j];
                array[j]=reverse;
            }
        }
    }
}

void write_the_array(){
    for(i=0;i<7;i++){
        printf("%d  ",array[i]);
    }
}
