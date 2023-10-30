#include<stdio.h>
int main(){
  int no;
  printf("enter the number");        
  scanf("%d",&no);
  
  int i=0;         // initialization
  while(i >= no){  // conditions
    printf("%d \n", i);     //body
    i++;                    //updation
  }
  return 0;
}
