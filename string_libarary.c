//// USE OF LIBARY FUNCTIONS


// #include<stdio.h>
// #include<string.h>

// int main()
// {
//     char s1[10]="Hello ";
//     char s2[10]="dev";
//     strcat(s1,s2);                   //strcat(string concatenate) join tehe two ine of sting 
//     printf("%s",s1);
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char ch[50]="dev";
//     int length = strlen(ch);         // stelen() gives the length of a function 
//     printf("%d", length);
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char ch[50]="dev";
//     char ch2[100]="jaiswal";
//     strcpy(ch2,ch);                   //     // copy the string to another variables
//     printf("%s",ch2);
//     return 0;
// }

#include<stdio.h>
#include<string.h>
int main()
{
    char ch[50]="dev";
    char ch2[50]="jaiswal";
    int result = strcmp(ch,ch2);           // use for compare two strings if both strings are same then return 0 other vice return negtive number 
    printf("%d",result);
    return 0;
}
   