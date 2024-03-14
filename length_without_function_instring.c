// WAp to print the length of string without libiary function
#include<stdio.h>
int main()
{
    char ch[50]="dev jaiswal";
    int sum=0;
    for (int i = 0; ch[i] != '\0'; i++)
    {
        sum = sum+ 1;
    }
    printf("The length of giving string is %d",sum);
    return 0;
}