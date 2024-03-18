#include<stdio.h>
#include<string.h>

struct students
{
    int rollno;
    char name[100];
    float marks;
};


int main()
{
    struct students list = {1,"dev",78.6};

    printf("The rollnumber %d \n",list.rollno);
    printf("the name is %s \n",list.name);
    printf("The marks %.1f\n",list.marks);

    printf("\n");
    struct students list1 = {2,"devendra",76.4};

    printf("The rollnumber %d \n",list1.rollno);
    printf("the name is %s \n",list1.name);
    printf("The marks %.1f",list1.marks);

    
    
    return 0;
}