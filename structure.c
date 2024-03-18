// WAP to print structures elements

#include<stdio.h>
#include<string.h>

struct students
{
    int rollno;
    char name[50];
    float percentage;
};



int main()
{
    struct students s1;
    s1.rollno = 01;
    strcpy(s1.name,"dev");
    s1.percentage = 87;

    printf("%d \n",s1.rollno);
    printf("%s \n",s1.name);
    printf("%.0f \n",s1.percentage);

    printf("\n");

    struct students s2;
    s2.rollno = 02;
    strcpy(s2.name,"devendra");
    s2.percentage = 88;

    printf("%d \n",s2.rollno);
    printf("%s \n",s2.name);
    printf("%.0f \n",s2.percentage);

}