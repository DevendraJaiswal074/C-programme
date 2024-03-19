// multiply of user given tabel

#include<stdio.h>
int main()
{
    int user;
    printf("ENTER THE TABLE NUMBER WHATEVER YOU WANT:");
    scanf("%d",&user);

    FILE *table;
    table = fopen("table.txt","w");

    for (int i = 0; i < 10; i++)
    {
        fprintf(table,"%d X %d = %d \n",user,i+1,user*(i+1));

    }
    fclose(table);
}