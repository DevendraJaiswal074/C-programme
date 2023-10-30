//WAP TO TAKE INTEGER INPUT FROM USER AND CHECK ACCORDING THAT NUMBER WHICH DAY USING OF SWITCH LOOP
#include<stdio.h>
int main(){
    int day;
    printf("enter 1-7 :-");
    
    scanf("%d",&day);

    switch (day )
    {
        case 1 :printf("monday \n");
                break;

        case 2 :printf("tuesday \n");
                break;
        
    
        case 3 :printf("wednesday \n");
                break;
 
    
        case 4 :printf("thusday \n");
                break; 
        case 5 :printf("friday");
                break; 
        


        case 6 :printf("saturday \n");
                break; 
    
        
        case 7 :printf("sunday \n");
                break;
    
        default:printf("wrong choice");
                break;
    }
    return 0;
}