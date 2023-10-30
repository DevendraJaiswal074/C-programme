//TAKE INPUT FROM USER AND WAP TO PRINT AREA OF SQUARE
#include<stdio.h>
int main(){
	int side;
	printf("enter data\n");
	scanf("%d", &side);
	
	int sum = side * side;
	printf("area of square %d",sum );
	return 0;
}
