//check the input is multiple of 7 or not
#include<stdio.h>
int main(){
    int user;
    do
    {
         printf("enter a number:");
        scanf("%d",&user);

        if (user % 7 == 0)                  //multiple of 7
        {
            printf("%d \n",user);
            break;
        }
    } while (1);
    printf("thank u");

    return 0;
}