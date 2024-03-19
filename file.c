#include <stdio.h>
int main()
{
    FILE *ptr;                                       // ptr hold the file address and file 
    ptr= fopen("file.txt","r");                     // opened the file in read mode fopen() is use to open files
    int number;
    fscanf(ptr,"%d",&number);                       // take the value of txt file and give to variable "number" fscanf is use to take value just  like scanf 
    printf("The value of txt file is %d",number);

    FILE *ptr1;
    ptr1= fopen("file2.txt","w");         // mode "w" create a file if file is not exist 
    int number1=55;
    fprintf(ptr1,"The number is %d",number1); // fprintf is use to write new file


    fclose(ptr);
    fclose(ptr1);      // fclose() function is use to close the file which are open 



    return 0;
}