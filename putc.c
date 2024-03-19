#include<stdio.h>
int main()
{
    FILE *dev;
    dev = fopen("putc.txt", "w"); // putc() function is use to write or give a charater by charater or the value of txt file

    putc('h',dev); 
    putc('e',dev);
    putc('l',dev);
    putc('l',dev);
    putc('o',dev);
    fclose(dev);
}