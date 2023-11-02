#include<stdio.h>
int main(){

    int x = 10;
    //printf("%p\n",&x);
    int*p=&x;
    printf("%p\n",p);

    //dereference
    printf("%d\n",*p);
    return 0;
}