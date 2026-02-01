#include <stdio.h>
#include<stdlib.h>
#include<math.h>
struct books {
    char* writer;
    int year;
    int page;
};

int main()
{
    struct books x;
    struct books* y;
    y=&x;
    (*y).writer="Sherlock holmes";
    (*y).year=1968;
    (*y).page=568;
    printf("%s\n",(*y).writer);
    printf("%d\n",(*y).year);
    printf("%d\n",(*y).page);
    return 0;
}
