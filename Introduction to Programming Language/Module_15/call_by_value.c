#include<stdio.h>

void fun(int x)
{
    x=200;
    printf("Fun x er address - %p\n",&x);

}
int main(){

    int x =10;
    printf("Main x er address - %p\n",&x);
    fun(x);
    printf("Main x er value - %d\n",x);
    
    return 0;
}