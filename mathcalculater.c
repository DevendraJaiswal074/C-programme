
#include<stdio.h>
#include<math.h>

int main(){
    printf("CHOOSE ANY ONE OF THEM \n \n");
    printf("********************************************************************* \n");
    printf("press 1 for add              | press 2 for sub \n");
    printf("press 3 for divide           | press 4 for  multi \n \n");
    printf("*********************************************************************\n");
    
    int user;
    printf("ENTER YOUR CHOOSE:-", user ,"\n\n");
    scanf("%d",&user);

    if (user==1)
    {
        int first,second;
        printf("enter first number",first,"\n");
        scanf("%d",&first);
        printf("enter second number ",second,"\n\n");
        scanf("%d",&second);

        int sum= first+second;

        printf("the sum is %d",sum);
        
    }

    else if (user==2)
    {
        int first,second;
        printf("enter first number",first,"\n");
        scanf("%d",&first);
        printf("enter second number ",second,"\n\n");
        scanf("%d",&second);

        int sum= first-second;

        printf("the finalnumber is %d",sum);
        
    }

    else if (user==3)
    {
        int first,second;
        printf("enter first number",first,"\n");
        scanf("%d",&first);
        printf("enter second number ",second,"\n \n");
        scanf("%d",&second);

        int sum= first/second;

        printf("the sum is %d",sum);

    }



    else if (user==4)
    {
        int first,second;
        printf("enter first number",first,"\n");
        scanf("%d",&first);
        printf("enter second number ",second,"\n\n");
        scanf("%d",&second);

        int sum= first*second;

        printf("the sum is %d",sum);
    }
    
    else
    {
        printf("OUT OF CHOOSE");
    }
}