#include<string.h>
#include <stdio.h>

int main()
{
    char* letter={"my favorite color pink"};
    char mywords[]={"this is my letter."};
    puts(mywords);    //puts kullandýðýnda kendisi "\n" iþareti býrakýr.
    puts(letter);     //puts sadece adress alýr yani ya array ya da pointer.

    printf("%d\n",strlen(mywords));    //strlen null hariç diðer karakterleri sayar.
    printf("%d\n",sizeof(mywords));   //sizeof null karakterini de sayar.
    printf("%d\n",strlen(letter));


printf("\n\n");

     char  string1[40]={"my favorite "};
     char string2[20]={"color black."};
    strcat(string1,string2);
    puts(string1);
    puts(string2);

printf("\n\n");

    char array1[40]={"C language is "};
    char array2[20]={"awesome"};
    strcpy(array1,array2);
    puts(array1);
    puts(array2);

printf("\n\n");

  char message[100];
  puts("write your words:");
  fgets(message,100,stdin);
  puts("\nyour message : ");
  puts(message);

    return 0;
}
