//Factorial using the function.
#include<stdio.h>

int fat1(int user,int sum);
int main(){
    int user,fact,sum=0;
    printf("ENTER A NUMBER");
    scanf("%d",&user);
    fat1(user,sum);


}

int fat1(int user, int sum){
    for (int i = 0; i < user; i++)
    {
        sum=sum+i;

    }
    printf("sum of factorial is %d ",sum);
    
}