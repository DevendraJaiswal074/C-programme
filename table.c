//WAP TO TAKE INPUT OF NUMBER AND PRINT IT'S TABLE 
#include<stdio.h>
int main(){
    int user,i;                              //variable
    printf("ENTER THE NUMBER:");
    scanf("%d",&user);                       //taken input
    for(i=1; i<=10 ;i++)
    {
        printf("%d*%d=%d \n",user,i,user*i); // %d use for print integer number
    }
    return 0;
}