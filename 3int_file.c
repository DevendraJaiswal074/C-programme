#include<stdio.h>
int main()
{
    FILE *read;
    read = fopen("3integer.txt","r");
    int output;
    fscanf(read,"%d",&output);
    printf("%d \n",output);
    fscanf(read,"%d",&output);
    printf("%d \n",output);
    fscanf(read,"%d",&output);
    printf("%d",output);

    return 0;
}