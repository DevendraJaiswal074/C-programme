// write a program to check the file is exist or not  if the file is exist then print the value of file


#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("check.txt", "r");
    if (ptr == NULL)
    {
        printf("THIS NAME FILE DOES NOT EXIST");
    }
    else
    {
        int output;
        fscanf(ptr, "%d", &output);
        printf("THE FILE IS EXIST \n");
        printf("THE VALUE OF EXIST FILE IS %d",output);
    }
    fclose(ptr);
    return 0;
}