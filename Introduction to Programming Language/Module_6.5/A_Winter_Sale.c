#include<stdio.h>
int main(){

    float X,P;
    scanf("%f %f",&X,&P);
    float before_discount = P/(1-X/100);
    printf("%.2f",before_discount);
    
    return 0;
}
