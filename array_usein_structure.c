#include<stdio.h>
#include<string.h>
struct student
{
    int rollno;
    char name[20];
    float marks;
};

int main()
{
    struct student list[100];

    list[0].rollno = 1;
    strcpy(list[0].name,"dev");
    list[0].marks= 87.6;

    list[1].rollno = 2;
    strcpy(list[1].name,"devendra");
    list[1].marks= 80.6;

    list[2].rollno = 3;
    strcpy(list[2].name,"devjaiswal");
    list[2].marks= 97.6;
    printf("done");

    return 0;
}