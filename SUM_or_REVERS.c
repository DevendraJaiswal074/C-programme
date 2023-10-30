/*WAP TO TAKE INPUT FROM USER AND USE(for,while)LOOP TO PRINT SUM AND 
COUNTING FROM THATS NUMBER ALSO PRINT IT REVERSE */

#include<stdio.h>
int main(){
    int user, count= 0;
    printf("enter number:");
    scanf("%d",&user);

    for (int i = 0; i <= user; i++)         //sum of user enter number
    {
        count = count+i;
        printf("%d \n",i);
    }

    printf("sum is %d",count);

    int user, count=0;
    printf("enter a number:");
    scanf("%d",&user);
    for (int i = user; i >=1; i--)         // sum of user and revers form
    {
        count= count+i;
        printf("%d \n",i);

    }
    printf("sum is =%d",count);
    return 0;
    
    


    int user, count=0;
    printf("enter a number:");
    scanf("%d",&user);

    int a=0;
    while (a<=user)
    {
        a++;
        count=count+a;
        
    }
    printf("sum of input = %d", count);    //USE OF WHILE LOOP

    return 0;
}