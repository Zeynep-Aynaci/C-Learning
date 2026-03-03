#include <stdlib.h>
#include <stdio.h>
#include <string.h>

enum level{
    SMALL=1,
    MEDIUM,
    LARGE,
    XLARGE
};

enum Correct{
    FALSE,
    TRUE
};
enum month{
    JANUARY=1,
    FEBRUARY,
    MARCH,
    APRÝL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMTER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};

int main()
{
    enum level myconst;
    myconst=SMALL;

    enum Correct myconst2;
    myconst2=TRUE;

    enum month Const;
    Const=JUNE;

switch(myconst){
    case 1: printf("small level\n"); break;
    case 2: printf("medium level\n");break;
    case 3: printf("large level\n"); break;
    case 4: printf("xlarge level\n");break;
    default: printf("there is no level");
}
 if(myconst2){
        printf("Transaction successfull\n");
    }else{
        printf("Operation failed\n");
    }

    if(Const==6 || Const==7 ||Const==8){
        printf("welcome to summer vacation");
    }else{
        printf("Its's school time again");
    }


    return 0;
}
