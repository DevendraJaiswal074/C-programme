#include <stdio.h>
#include <string.h>


int main() 
{
    char ch,s[100] ;
    
    scanf("%c",&ch);
    scanf("%s",s);                 // print the statment in digonal way

    printf("%c\n",ch);
    printf("%s\n",s);
    scanf("\n");        //avoid new line
    scanf("%[^\n]%*c", s);
    printf("%s",s);  
    return 0;
}