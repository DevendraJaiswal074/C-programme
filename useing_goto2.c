//write a program that prints numbers from 1 to 10 using the goto statement. The below program explains how to do this.
#include<stdio.h>
  
void Numbers() 
{ 
    int n = 1; 
label: 
    printf("%d \n ", n); 
    n++; 
    if (n <= 10) 
        goto label; 
} 

int main() 
{ 
    Numbers(); 
    return 0; 
}