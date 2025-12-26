#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
int numberofproduct,day;
numberofproduct=0;
day=0;
char *dayname;
printf("enter a day : ");
scanf("%d",&day);
switch(day){
    case 7:numberofproduct+=23;
         if(day==7){dayname="sunday";}
    case 6:numberofproduct+=20;
         if(day==6){dayname="saturday";}
    case 5:numberofproduct+=6;
         if(day==5){dayname="friday";}
    case 4:numberofproduct+=12;
         if(day==4){dayname="thursday";}
    case 3:numberofproduct+=7;
         if(day==3){dayname="wednesday";}
    case 2:numberofproduct+=5;
         if(day==2){dayname="tuesday";}
    case 1:numberofproduct+=2;
         if(day==1){dayname="monday";}
}
printf("number of product is %d\n\n",numberofproduct);
printf("day name is %s",dayname);
return 0;
}



