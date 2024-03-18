// WAP to print the string 
#include <stdio.h>
int main()
{
    char ch[] = "dev";
    char *str = ch;
    while (*str != '\0')
    {
        printf("%c", *str);
        str++;
    }
    return 0;
}
//second method to print a string using the %s data type

#include<stdio.h>
int main()
{
    char *strings="devendrajaiswal";
    printf("%s",strings);
    return 0;
}