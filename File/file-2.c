#include<stdlib.h>
#include<stdio.h>

//dosya yazma iþlemleri
int main()
{
    FILE* fptr;
    fptr=fopen("C:\\Users\\zeyne\\OneDrive\\Masaüstü\\File-data\\data.txt","w");
    char mymessage[100];
    if(fptr==NULL){
        printf("file open unsuccessful!\n");
    }
    else{
            printf("enter a sentence :");
            fgets(mymessage,100,stdin);
        fputs(" hello c language\n",fptr);
        fprintf(fptr,"%s",mymessage);  //yazdýrma iþlemi fputs ve fprintf kullanýlarak yapýlýr
        printf("File open successful!\n");
    }
    fclose(fptr);

    return 0;
}
