//CREATE A FUNCTION TO CHECK USER IS INDIAN OR FRENCH .
#include<stdio.h>

void namaste(){
    printf("NAMASTE SIR");   
}

void french(){
    printf("BONJOUR SIR");
}

int main(){
    char user;
    printf("ARE YOU INDIAN OR FRENCH \n");
    printf("if you Indian press'i' or french 'f' :");
    scanf("%c",&user);

    if (user=='f' || user=='F')
    {
        french();
    }

    else if (user=='i'|| user=='I')
    {
        namaste();
    }

    else
    {
        printf("wrong chooise !! try again");
    }
    
    
    return 0;
}