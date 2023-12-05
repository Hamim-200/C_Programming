#include<stdio.h>
int main(){

    char a;
    scanf("%c",&a);

    if(a == 122){
        printf("a");
    }
    else{
        printf("%c",a+1);
    }
    return 0;
}