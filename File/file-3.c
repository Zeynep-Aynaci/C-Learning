#include<stdlib.h>
#include<stdio.h>

//dosya okuma iþlemleri
int main()
{
    FILE* fptr;
    fptr=fopen("C:\\Users\\zeyne\\OneDrive\\Masaüstü\\File-data\\data.txt","r");
    char mymessage[100];
    char myletter;
    if(fptr==NULL){
        printf("File open unsuccessful!");
    }else{
       do{
        printf("%c",myletter);
       }while((myletter=getc(fptr))!=EOF);    //1. yöntem



            while(fgets(mymessage,100,fptr)){   //2.yöntem     fgets tek satýr okur.
            printf("%s",mymessage);
            }

        printf("file open successful");

    }
    fclose(fptr);


    return 0;
}
