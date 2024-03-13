#include <stdio.h>
int main()
{
    int arr[2][3];
    for (int i = 0; i < arr; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("enter a number:\n");
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < arr; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("the elements of 2d array is %d:",arr[i][j]);
        }
    }

    return 0;
}