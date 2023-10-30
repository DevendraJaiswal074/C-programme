// USE (for,do,while) LOOP AND PRINT 'A' TO 'Z' ALPHABETS 

#include<stdio.h>
int main()
{
    for (char i='a'; i<='z'; i++)    // USE OF FOR LOOP to print A-Z alphas
    {
        printf("%c  \n",i);
    }

    char j='A';
    while (j<='Z')                   // USE OF WHILE LOOP
    {
        printf("%c \n",j);
        j++;
    }

    char k='a';
    do
    {
        printf("%c  \n",k);          // USE OF DO LOOP
        k++;
    } while (k<='z');
}