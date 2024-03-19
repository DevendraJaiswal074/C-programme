#include<stdio.h>
int main()
{
    FILE *dev;
    dev = fopen("generated.txt","w");   // w mode create the file if file is not exist 

    int number=6111;
    fprintf(dev,"The nnumber is %d",number); // fprintf is use to write new file

    fclose(dev);

    return 0;
}