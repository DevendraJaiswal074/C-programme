//ADD TWO NUMBER USING FUNCTION
#include<stdio.h>

int add(int a , int b);
int main(){

    int a,b,sum;
    printf("enter a number:");
    scanf("%d",&a);
    printf("enter a number:");
    scanf("%d",&b);

    sum=add(a,b);
    printf("the total of a and b is:%d",sum);
}

int add(int a,int b){
    int c = a+b;
    

}