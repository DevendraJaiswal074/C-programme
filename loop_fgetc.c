// other method to print or read the value of txt file --->

#include <stdio.h>
int main()
{
    FILE *dev;
    dev = fopen("loop_fget.txt", "r");
    char c;

    c = fgetc(dev);
    while (c != EOF)
    {
        printf("%c",c);
        c= fgetc(dev);
    }

    return 0;
}