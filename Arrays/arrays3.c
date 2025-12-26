#include<stdlib.h>
#include <stdio.h>
#include<math.h>    //stdno[]  notes[] numofstd
#include<time.h>
int main(){
    int stdno[100],notes[100];
    int numofstd,big=0,small=100,bigindex,smallindex;
    printf("enter number of student(0-100) :");
    scanf("%d",&numofstd);
    if(numofstd<0 || numofstd>100){
        printf("please enter num of student again :");
        scanf("%d",&numofstd);
    }
    for(int i=0;i<numofstd;i++){
        printf("enter student no and note:");
        scanf("%d%d",&stdno[i],&notes[i]);

    }

    printf("studen no\t\t note that it take\n");
    for(int i=0;i<numofstd;i++){
        printf("%d\t\t\t %d \n",stdno[i],notes[i]);
    }
    for(int i=0;i<numofstd;i++){
        if(notes[i]>big){
            big=notes[i];
            bigindex=stdno[i];
        }
        if(notes[i]<small){
            small=notes[i];
            smallindex=stdno[i];
        }
    }
    printf("student no:%d \t student no:%d\n",bigindex,smallindex);
    printf("biggist note:%d\t smallest note:%d",big,small);

    return 0;
}
