#include<stdio.h>
#include<string.h>

typedef struct students
{
    int rollno;
    char name[100];
    float marks;
}stud;                 // stud is the replace to write struct student smiple word short form of student is stud because of the function typedef


int main()
{
    //struct students list = {1,"dev",78.6};
    //Another way to write the struct students is "stud" just because the use of typedef

    stud list={1,"dev",78.6};
    printf("The rollnumber %d \n",list.rollno);
    printf("the name is %s \n",list.name);
    printf("The marks %.1f\n",list.marks);

    printf("\n");
    stud list1 = {2,"devendra",76.4};

    printf("The rollnumber %d \n",list1.rollno);
    printf("the name is %s \n",list1.name);
    printf("The marks %.1f",list1.marks);

    
    
    return 0;
}