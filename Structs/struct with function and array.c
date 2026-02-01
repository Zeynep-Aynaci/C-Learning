#include <stdio.h>
#include<stdlib.h>
#include<math.h>

struct movies{
 char* name;
  int year;
  float ýmbb;
};
void showme(struct movies x[]);
int main()
{
    int i;
    struct movies x[2];
   x[0].name="harry";
   x[0].year=2000;
   x[0].ýmbb=9.8;
   x[1].name="Kill Bill";
   x[1].year=1998;
   x[1].ýmbb=8.8;

    showme(x);
    return 0;
}
void showme(struct movies x[]){
    int i;
    for(i=0;i<2;i++){
        printf("%s  %d  %.2f\n",x[i].name,x[i].year,x[i].ýmbb);
    };
}
