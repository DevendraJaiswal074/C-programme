//PRACTICE TO TAKE MULTII INPUT

#include <stdio.h>
#include <math.h>
int main()
{
    int a,b;
    float c,d;
    
    scanf("%d %d",&a , &b);     //TAKE MULTI INPUT FROM USER
    scanf("%f %f",&c  , &d);
    
    printf("enter no %d %d", (a+b), (a-b));
    printf("\n");
    printf("enter no %.1f %.1f ", (c+d), (c-d)); // %.1 means after point print only one zero 
    return 0;                                         
}