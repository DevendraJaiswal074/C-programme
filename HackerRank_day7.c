// we have Given an array, A, of N integers, print A's elements in reverse order as a single line of space-separated numbers

#include<stdio.h>
#include<string.h>

int main()
{
    int n,a[100];
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int j = n-1; j >= 0; j--)
    {
        printf("%d\n",a[j]);
    }
}