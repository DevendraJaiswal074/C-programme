//CREATE A FUNCTION AND TAKE INTEGER NUMBER INPUT ALSO PRINT THE SUM TWO NUMBER 
#include<stdio.h>

int sum(int a, int b){
    return a+b;
}

int main(){
    int a,b;
    printf("ENTER TWO VALUE:  ");
    scanf("%d \n %d",&a ,&b);

    int total=sum(a ,b);
    printf("SUM OF 'A' AND 'B': %d",total);
    
    return 0;
}