#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int findmax(int x,int y,int z);
int findmin(int x,int y,int z);

int main ()
{
int x,y,z;
printf("enter three numbers :");
scanf("%d%d%d",&x,&y,&z);
printf("%d is a max number\n",findmax(x,y,z));
printf("%d is a min number",findmin(x,y,z));
                                                
return 0;
}


int findmax(int x,int y,int z){
int max=x;
if(y>x){
    max= y;
}if(z>x){
    max=z;
}
return max;

}



int findmin(int x,int y,int z){
int min=x;

if(y<x){
    min= y;
}

if(z<x){
    min=z;
}
return min;
}
