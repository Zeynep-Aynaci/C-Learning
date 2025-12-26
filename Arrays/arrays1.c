#include<stdlib.h>
#include <stdio.h>
#include<math.h>
#include<time.h>

int main(){
    int dice,howmany[7]={0,0,0,0,0,0,0};
    srand(time(NULL));
    for(int i=0;i<100;i++){
    dice=rand()%6+1;
    howmany[dice]++;
    }
    printf("Dice number \t how many time the dice come \n");
    for(int i=1;i<7;i++){
    printf("%d\t\t %d\n",i,howmany[i]);
    }

return 0;
}
