#include <stdio.h>
int main()
{
    int a = 7;
    int *b = &a;

    int d1=11;
    int *d= &d1;
    int **c = &d;

    printf("The value of a is %d\n", a);   // prinnt a value
    printf("The value of a is %d\n",*b);   // use of pointer print a value
    printf("The address of a is %u\n",b);   // print a address
    printf("The address of a is %u\n", &a);  // print a address
    printf("The address of b is %u\n",&b);   // address of b 
    printf("The value of b is %d\n",*(&b));  // value of b 
    
    printf("The adress of c is %u\n ",&c);  // address of c
    
    printf("The value of c is %d",**c);  



    return 0;
}

#include<stdio.h>
int main()
{
    int a=7; 
    int *b=&a;

    printf("the address of variable a is %u \n",&a);
    printf("the value of a is %d \n",*b);
    return 0;
}