#include<stdio.h>

int large(int a ,int b, int c);

int main(){

    int a ,b,c;
    printf("ENTER A NUMBER:");
    scanf("%d",&a);
    printf("ENTER B NUMBER:");
    scanf("%d",&b);
    printf("ENTER C NUMBER:");
    scanf("%d",&c);

    large(a,b,c);

}

int large(int a,int b , int c){
    if (a>b && a>c)
    {
        printf("a is greater then all ");
        
    }
    else if (b>a && b>c)
    {
                printf("b is greater then all ");
    }
    else if (c>a && c>b)
    {
                printf("c is greater then all ");
    }
    else
    {
        printf("sorry");
    }
}