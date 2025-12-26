#include <stdio.h>

int main()
{
 int numberofnotes,note,sum=0;
 double average;
 printf("please neter the number of notes : ");
 scanf("%d",&numberofnotes);
 printf("\n please enter the notes :");
 for(int i=1;i<=numberofnotes;i++){
     scanf("%d",&note);
     sum+=note;
 }
 average=sum/numberofnotes;
 printf("\nsum of the notes : %d\n",sum);
 printf("average of the notes : %.2lf",average);




    return 0;
}
