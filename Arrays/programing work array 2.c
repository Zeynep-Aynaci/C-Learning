#include<stdlib.h>
#include <stdio.h>
#include<math.h>
#include<time.h>
#include <stdio.h>

int findmin(int array[],int size);

int main()
{
    int numbers[]={3,6,12,9,2};
    int size=5;
    int result=findmin(numbers,size);
    printf("minimum number is : %d",result);
    return 0;
}


int findmin(int array[],int size){
int min = array[0];

   for(int i=1;i<size;i++){
      if(array[i]<min){
        min=array[i];
    }
   return min;
 }
}
