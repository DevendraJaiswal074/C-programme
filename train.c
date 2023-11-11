#include<stdio.h>
int main(){
    
    int s;
    printf("enter the seat number");
    scanf("%d",&s);

    if (s%8==1)
    {
        printf("you got lower seat");
    }
    else if (s%8==6||7)
    {
        printf("you got lower seat");
    }

    else if (s%8== 2||5)
    {
        printf("you got middle seat");
    }

    else if (s%8== 3||4||8)
    {
        printf("you got upper seat");
    }

    
    

    else
    {
        printf("wrong input ! try again");
    }
    
    
    
    
}