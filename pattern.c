#include<stdio.h>
int main(){
    int colum,rows,j=1;

    for(rows=1;rows<=4;rows++){
        for (colum=1; colum <=4 ; colum++){
            if (colum<=rows)
            {
                printf("%d ",j++);
            }
            else
            {
                printf(" ");
            }
            
        }
        printf("\n");

        
    }
    return 0;
}