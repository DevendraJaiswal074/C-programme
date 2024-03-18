// WAP to take input from user and print yes both are same or No if not same 
#include<stdio.h>
#include<string.h>
int main()
{
    char user[100];
    printf("ENTER YOUR NAME");
    scanf("%s",&user);
    char user2[100];
    printf("ENTER YOUR NAME");
    scanf("%s",&user2);

    int compare = strcmp(user,user2);
    if (compare==0)
    {
        printf("YES BOTH NAME ARE SAME %s and %s",user,user2);
    }
    else
    {
        printf("NOT THE BOTH NAME ARE SAME %s and %s",user,user2);
    }
    

    
    return 0;
}