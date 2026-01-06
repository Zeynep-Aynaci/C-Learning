#include <stdio.h>

void countCharecters(char x[]);

int main()
{
    char x[100];
    int i=0;
    printf("enter a sentence : ");
    do{
        scanf(" %c",&x[i]);
        i++;

    }while(x[i-1]!='.');

    countCharecters(x);

    return 0;
}

void countCharecters(char x[]){
    int i,acount=0,ecount=0;

    for(i=0;x[i]!='.';i++){
        if(x[i]=='A' || x[i]=='a')
        acount++;
        if(x[i]=='E' || x[i]=='e')
        ecount++;
    }
    printf("A/a :%d\n",acount);
    printf("E/e :%d\n",ecount);

}
