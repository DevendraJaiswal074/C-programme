// WAP to declare 3 structure variables and takes the values from the user 

#include <stdio.h>
#include <string.h>

struct students
{
    int rollno;
    char name[100];
    float t_marks;
};

int main()
{
    struct students s1, s2, s3;
    printf("ENTER THE DATA FOR STUDENT_1:\n ");

    printf("Rollnumber:");
    scanf("%d", &s1.rollno);

    printf("Name:");
    scanf("%s", s1.name);

    printf("Total marks:");
    scanf("%f", &s1.t_marks);
    printf("\n");

    printf("ENTER THE DATA FOR STUDENT_2:\n ");

    printf("Rollnumber:");
    scanf("%d", &s2.rollno);

    printf("Name:");
    scanf("%s", s2.name);

    printf("Total marks:");
    scanf("%f", &s2.t_marks);
    printf("\n");

    printf("ENTER THE DATA FOR STUDENT_3:\n ");

    printf("Rollnumber:");
    scanf("%d", &s3.rollno);

    printf("Name:");
    scanf("%s", s3.name);

    printf("Total marks:");
    scanf("%f", &s3.t_marks);
    printf("\n");

    printf("Roll number =%d \n", s1.rollno);
    printf("Name is %s \n", s1.name);
    printf("Marks= %.2f \n", s1.t_marks);
    printf("\n");

    printf("Roll number =%d \n", s2.rollno);
    printf("Name is %s \n", s2.name);
    printf("Marks= %.2f \n", s2.t_marks);
    printf("\n");

    printf("Roll number =%d \n", s3.rollno);
    printf("Name is %s \n", s3.name);
    printf("Marks= %.2f \n", s3.t_marks);
    printf("\n");
}