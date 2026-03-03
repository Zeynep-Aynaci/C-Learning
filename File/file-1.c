#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    FILE* fptr;
    fptr=fopen("C:\\Users\\zeyne\\OneDrive\\Masaüstü\\data\\data.txt","r");
   char myletter;
    if(fptr==NULL){
        printf("file open unsuccessful!");
    }else{
          do{
          myletter=getc(fptr);
          printf("%c",myletter);
         }while(myletter=!EOF);

        printf("Data was written to file successfully");
    }

    fclose(fptr);

    return 0;
}

