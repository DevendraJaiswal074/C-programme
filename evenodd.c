//take integer input from user and check the number is even or odd
#include<stdio.h>
int main(){
    int inp;
    printf("enter any number");
    scanf("%d",&inp);

    if (inp%2==0)
    {
        printf("the number is divided by 2"); //check the number even or odd
    }
    else
    {
        printf("its cant divided by 2");
    }
}