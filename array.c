// #include<stdio.h>

// int main()
// {

//     int user;
//     printf("enter size of array");
//     scanf("%d", &user);
//     int marks[user];

// for (int i = 0; i < user; i++)
// {
//     printf("Enter a the marks :");
//     scanf("%d", &marks[i]);

// }

//     for (int i = 0; i < user; i++)
//     {
//         printf("the mark %d \n",marks[i]);
//     }

//     return 0;
// }

#include <stdio.h>
int main()
{
    int marks[] = {2, 3, 4, 5, 6, 7, 55, 7, 55,777, 5, 55};
    int user = marks[];

    for (int i = 0; i < user; i++)                           //error😔😔
    {
        printf("the mark %d \n", marks[i]);
    }

    return 0;
}