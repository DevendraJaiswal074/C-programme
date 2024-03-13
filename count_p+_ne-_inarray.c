// WAP to count the postive number in a array

#include <stdio.h>
int main()
{
    int user, count_postive = 0, count_negative = 0;

    int arr[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Enter the element:"); // user give the input
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > 0)
        {
            count_postive = count_postive + 1;
        }
        else if (arr[i] < 0)
        {
            count_negative = count_negative + 1;
        }
    }
    printf("The postive number is : %d \n", count_postive);
    printf("The postive number is : %d \n", count_negative);
    return 0;
}

#include <stdio.h>
int main()
{
    int arr[10] = {2, -66, 4, 5, -8, 7, 8, -3, -3, -4}; // input are given
    int count_postive = 0, count_negative = 0;

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > 0)
        {
            count_postive = count_postive + 1;
        }
        else if (arr[i] < 0)
        {
            count_negative = count_negative + 1;
        }
    }
    printf("The postive number is : %d \n", count_postive);
    printf("The postive number is : %d \n", count_negative);

    return 0;
}