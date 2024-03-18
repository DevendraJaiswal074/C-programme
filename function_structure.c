#include <stdio.h>
#include <string.h>
struct student
{
    int rollno;
    char name[20];
    float marks;
};

void show(struct student list, struct student list1)    // function
{
    printf("The rollno is %d \n", list.rollno);
    printf("The name is %s \n", list.name);
    printf("The marks is %f \n", list.marks);
    printf("\n");
    printf("The rollno is %d \n", list1.rollno);
    printf("The name is %s \n", list1.name);
    printf("The marks is %f \n", list1.marks);
}

int main()
{
    struct student list;

    list.rollno = 1;
    strcpy(list.name, "dev");
    list.marks = 87.6;

    struct student list1;

    list1.rollno = 2;
    strcpy(list1.name, "devendra");
    list1.marks = 87.6;

    show(list, list1); //function call
}