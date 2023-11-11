#include<stdio.h>

int main(){
    int a = 3,b=20;
    int sum = a+b;
    int minus = b-a;
    int multiply = a*b;
    float div = b*1.0/a;
    int mod = b%a;

    printf("%d \n",sum);
    printf("%d \n",minus);
    printf("%d \n",multiply);
    printf("%f \n",div);
    printf("%d \n",mod); 

    return 0; 
}