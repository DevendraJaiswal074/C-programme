// WAP with the use of gets() and puts() function
#include <stdio.h>
int main()
{
    char strings[50];
    printf("Enter your full name :");
    gets(strings);                       // gets() takes the input from user with multi words (including space)
    printf("Your name is  :");

    puts(strings);// puts() give the output of string with multi words (including space)
    return 0;
}