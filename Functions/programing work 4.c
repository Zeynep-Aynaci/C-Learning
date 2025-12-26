#include<stdlib.h>
#include<stdio.h>
#include<math.h>


void drawfilledsquare(int x);
void  drawhollowsquare(int x);

int main (){
    int size;
    char type;
    printf("enter type of square(filled=f hollow=h) : ");
    scanf(" %c",&type);
    printf("enter the size of square : ");
    scanf("%d",&size);
    if(type=='f'){
    drawfilledsquare(size);
    }else if(type=='h'){
    drawhollowsquare(size);
    }else{
    printf("invalid type!!");
    }

return 0;  
}

void drawfilledsquare(int x){
for(int i=1;i<=x;i++){
    for(int j=1;j<=x;j++){
        printf("* ");
    }
    printf("\n");
   }
}

void  drawhollowsquare(int x){
for(int i=1;i<=x;i++){

    for(int j=1;j<=x;j++){

        if(i==1 || i==x ){
            printf("* ");
        }else{
            if(j==1 || j==x){
                printf("* ");
            }else{
                  printf("  ");
                }

           }
      }
      printf("\n");
   }

}
