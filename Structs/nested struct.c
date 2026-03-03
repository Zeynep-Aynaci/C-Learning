
#include <stdio.h>
#include <string.h>

struct candidateinfo{
    char* name;
    char* lastname;
    int age;
    int note;
    float average;
};
struct interview{
    char* interviewer;
    char* interviewDate;
    struct candidateinfo candidate;
    int interviewnote;
};

int main()
{
    struct interview y;
    y.interviewer="Ceren Yilmaz";
    y.interviewDate="05.06.2025";
    y.candidate.name="Zeynep";
    y.candidate.lastname="Aynaci";
    y.candidate.age=21;
    y.candidate.note=98;
    y.candidate.average=96.7;
    y.interviewnote=95;


    printf("%s\n", y.interviewer);
    printf("%s\n", y.interviewDate);
    printf("%s\n", y.candidate.name);
    printf("%s\n", y.candidate.lastname);
    printf("%d\n", y.candidate.age);
    printf("%d\n", y.candidate.note);
    printf("%2.f\n", y.candidate.average);
    printf("%d\n",y.interviewnote);


    return 0;
}
