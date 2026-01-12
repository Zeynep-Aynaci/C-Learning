#include<stdlib.h>
#include<stdio.h>
void reverseArray(int*,int);

int main() {
int array[5] = {10,12,66,7,28};
reverseArray(array, 5);

int array2[4] = {13, 5, 11, 6};
reverseArray(array2, 4);

for(int i=0;i<5;i++){
printf("%d " ,array[i]);
}
printf("\n");
for(int i=0;i<4;i++){
printf("%d ",array2[i]);
}
return 0;
}

void reverseArray(int* ptr, int size) {
    int i,ref;
    for(i=0;i<size/2;i++){
        ref=ptr[size-1-i];
        ptr[size-1-i]=ptr[i];
        ptr[i]=ref;
    }

}
