// #include<stdio.h>

// int main(){

//     int user, remb ,num, trans;
//     printf("enetr a five digit number:");
//     scanf("%d ",&user);
//     trans=user;
//     if (trans != 0)
//     {
//         remb= trans%10;
//         num=num+remb*remb*remb;
//         trans=trans/10;
//     }
//     else
//     {
//         printf("equal");
//     }
    

//     if (user==num)
//     {
//         printf("given number %d are equal to reverse number %d",user , num);
//     }
    
//     else
//     {
//         printf("not equal");
//     }
    
// }

#include<stdio.h>
#include<conio.h>
void main()
{
    int num,a,b,c,d,reverse,d1,d2,d3,d4,d5;
    printf("Enter a 5 digit number\n");
    scanf("%d",&num);

    a=num/10;
    d5=num%10;

    b=a/10;
    d4=a%10;

    c=b/10;
    d3=b%10;

    d=c/10;
    d2=c%10;

    d1=d%10;

    reverse=d5*10000 + d4*1000 + d3*100 + d2*10 + d1*1;
    printf("Reverse number of %d is %d\n",num,reverse);

    if (num==reverse)
    printf("Both the numbers are equal");
    else
    printf("Both the numbers are not equal");

}