#include<stdio.h>
int main(){
    int user,trans,remb,num=0;
    printf("enter a postive number");
    scanf("%d",&user);

    trans=user;
    while (trans != 0)
    {
        remb= trans%10;
        num=num+remb*remb*remb;
        trans=trans/10;
    }
    if (num==user)
    {
        printf("%d is an amstronng number",user);
    }
    else
    {
        printf("%d is an not amstrong number",user);
    }
        
}