 #include<string.h>
#include <stdio.h>
#include <ctype.h>

int main()
{   char words[9][20]={"chair","dairy","boss","circus","fly","dog","church","clue","dish"};
    char plural[30];
int i,size;
    for(i=0;i<9;i++){
    strcpy(plural,words[i]);
    size=strlen(words[i]);
    if (words[i][size - 1] == 'y') {
            plural[size- 1] = '\0';
            strcat(plural, "ies");
        }
        else if (words[i][size - 1] == 's' ||
                (words[i][size - 2] == 'c' && words[i][size - 1] == 'h') ||
                (words[i][size - 2] == 's' && words[i][size - 1] == 'h')) {
            strcat(plural, "es");
        }
        else {
            strcat(plural, "s");
        }
       printf("%s -> %s\n", words[i], plural);
       }


 return 0;
}
