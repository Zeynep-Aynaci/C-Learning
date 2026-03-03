#include<stdlib.h>
#include <stdio.h>

int main()
{
   int size,newSize;
   printf("kac elemanlik array olustutucaksiniz : ");
   scanf("%d",&size);
   int* numbers=(int*)calloc(size,sizeof(int));
   if(numbers==NULL){
       printf("bellek acma basarisiz");
       return 1;
   }
   for(int i=0;i<size;i++){
       printf("numbers[%d] : ",i);
       scanf("%d",&numbers[i]);
   }
    printf("mevcut array : ");
   for(int i=0;i<size;i++){
       printf("%d ",numbers[i]);
   }


   printf("\n yeni array sayisi : ");
   scanf("%d",&newSize);
   numbers=(int*)realloc(numbers,newSize*sizeof(int));
   for(int i=size;i<newSize;i++){
       printf("numbers[%d] : ",i);
       scanf("%d",&numbers[i]);
   }
   printf("New array : ");
   for(int i=0;i<newSize;i++) {
       printf("%d ",numbers[i]);
   }
   free(numbers);



    return 0;
}
