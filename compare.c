/*In ChefLand, human brain speed is measured in bits per second (bps). Chef has a threshold limit of 
X bits per second above which his calculations are prone to errors. If Chef is currently working at 
Y bits per second, is he prone to errors?

If Chef is prone to errors print YES, otherwise print NO */

#include <stdio.h>

int main() {
    
	int x, y;
	scanf("%d",&x);
	scanf("%d",&y);
	
	if(x>=y){
	    printf("NO");
	}
	else if(y > x){
	    printf("YES");
	}
	
	return 0;
}