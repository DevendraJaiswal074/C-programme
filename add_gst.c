//18 % gst add in every product price
#include<stdio.h>

void percentage(float price){
    float amount =price +0.18*price;
    printf("YOUR PRODUCT PREICE IS: %f",amount);
}

int main(){
    float price;

    printf("ENTER THE PRICE OF PRODUCT: ");
    scanf("%f",&price);

    percentage(price);
}