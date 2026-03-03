#include<stdlib.h>
#include<stdio.h>


int main()
{
    FILE* fptr,*fptrCopy;
    fptr=fopen("C:\\Users\\zeyne\\OneDrive\\Masaüstü\\File-data\\data.txt","r");
    fptrCopy=fopen("C:\\Users\\zeyne\\OneDrive\\Masaüstü\\File-data\\dataCopy.txt","w");

    if(fptr==NULL){
        printf("data.txt dosyasi acilamadi");
    }else{
        if(fptrCopy==NULL){
            printf("dataCopy.txt dosyasi acilamadi");
        }else{
            while(!feof(fptr)){
            fputc(fgetc(fptr),fptrCopy);
        }
        printf("The field has been copied");

      }
    }

    fclose(fptr);
    fclose(fptrCopy);

    return 0;
}
