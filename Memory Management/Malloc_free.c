#include<stdlib.h>
#include <stdio.h>

//malloc(sizeof(int)) : memory allocation(hafýzada ne kadar yer ayýrmak istiyorsun sonra deðer ata ve ayýrdýðý yeri free ile boþalt)
//free(x) : ayýrýlan yeri boþalt ramde boþa yer kaplamayý önler.
int main()
{
    int* x=(int*)malloc(sizeof(int));
    *x=7;
    printf("%d",*x);
    free(x);



    char* message=(char*)malloc(sizeof(char));
    *message='M';
    printf("%c",*message);
    free(message);

    return 0;
}
