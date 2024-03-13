//write a program where we need to check if a number is even or not and print accordingly using the goto statement. The below program explains how to do this:
#include<stdio.h>
int main(){
    int inp;
  

    printf("enter a number:");
    scanf("%d",&inp);

    if (inp % 2==0)
    {
        goto label1;
    }
    else
    {
        goto label2;
    }
    label1:
        printf("%d its a prime number",inp);
        return 0;

    label2:
        printf("%d its not a even ",inp);
    
}