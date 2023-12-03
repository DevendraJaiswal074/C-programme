 #include<stdio.h>
int main()
{
    int user;
    printf("ENTER A NUMBER: ");
    scanf("%d",user);

    int fact=1;                                             
    for(int i=1 ;i<=user; i++){
        fact= fact * i;
    }

    printf("%d",fact);
    return 0;
}


