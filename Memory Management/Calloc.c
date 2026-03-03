#include<stdlib.h>
#include <stdio.h>
//calloc dinamik bellekde ayýrdýðý yerlerde sadece 0 deðerini tutar.malloc ise ayýrdýðý yerde eski deðerler kalmýþ olabilir.
//calloc da virgül malloc da asterix kullanýrýz.

int main()
{
    int size=3;
   int* arr=(int*)calloc(size,sizeof(int));
   if(arr==NULL){
       printf("Bellek ayýrma baþarýsýz");
       return 1;
   }
   for(int i=0;i<size;i++){
       printf("%d",arr[i]);
   }
   free(arr);
    return 0;
}
