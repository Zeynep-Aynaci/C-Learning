#include<stdlib.h>
#include<stdio.h>
float findavgtemp(float*);
int i;
int main() {
    float city1[7],city2[7];
    printf("Input the daily temperatures of the city1 : ");
    for(i=0;i<7;i++){
    scanf("%f",&*(city1+i));
    }
    printf("\nInput the daily temperatures of the city2 : ");
    for(i=0;i<7;i++){
    scanf("%f",&*(city2+i));
    }
     printf("\nAverage temperature of the city1: %.2f\n\n",findavgtemp(city1));
     printf("Average temperature of the city1: %.2f\n",findavgtemp(city2));

    return 0;
}
float findavgtemp(float*ptr){
    float sum=0;
    for(i=0;i<7;i++){
        sum+=*(ptr+i);
    }
     return sum/7;
}
