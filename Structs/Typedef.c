#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct {
    char* name;
    int age;
    int note;
}students;

int main()
{
    students s1={"zeynep",21,98};
    students s2={"ceren",23,96};

   printf("name : %s\n",s1.name);
   printf("age : %d\n",s1.age);
   printf("note :%d\n\n\n",s1.note);

   printf("name : %s\n",s2.name);
   printf("age : %d\n",s2.age);
   printf("note :%d\n",s2.note);
    return 0;
}
