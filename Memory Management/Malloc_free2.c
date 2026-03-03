#include<stdlib.h>
#include <stdio.h>

//stack local variable otomatik depolanýr ve silinir
//heap(dinamik bellek) burda kendin yer ayýrýrsýn daha sonra free ile boþaltýrsýn.

int main()
{
    int size=3;
    int* numbers=(int*)malloc(size * sizeof(int));
    for(int i=0;i<size;i++){
        scanf("%d",& *(numbers+i));
    }
    for(int i=0;i<size;i++){
    printf("%d",*(numbers+i));
    }
    free(numbers);

    return 0;
}
