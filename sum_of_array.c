// Wap to take n number of input in an array and print the sum of all elements or clean the array storage.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int user;
    scanf("%d", &user);
    int arr[user];
    int sum = 0;

    for (int i = 0; i < user; i++)
    {
        scanf("%d", &arr[i]);
        sum=sum+arr[i];
    }

    printf("%d", sum);

    return 0;
}