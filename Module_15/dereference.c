#include<stdio.h>
int main(){

    int x = 200;
    int * ptr = &x;

    x= 300;

    printf("x er value- %d\n",x);
    printf("x er value - %d\n",*ptr);
    return 0;
}