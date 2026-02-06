#include <stdio.h>
#include<math.h>

void function(int* mynumbers,int size);

int main()
{
    int mynumbers[7]={1,4,6,2,7,5,8};
    int i;
    int size=sizeof(mynumbers)/sizeof(mynumbers[0]);
    printf("previous statement :\n\n ");
    for(i=0;i<size;i++){
        printf(" mynumbers[%d] : %d\n",i,*(mynumbers+i));
    }
    printf("\n next statement : \n\n");
    function(mynumbers,size);
    for(i=0;i<size;i++){
        printf(" mynumbers[%d] : %d\n",i,*(mynumbers+i));
    }

    return 0;
}

void function(int* mynumbers,int size){
    int i;
    for(i=0;i<size;i++){
     *(mynumbers+i) *=3;
    }
}
