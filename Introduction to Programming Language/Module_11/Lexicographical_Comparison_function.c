//USING strcmp Function.
#include<stdio.h>
#include<string.h>
int main(){

    char a[100],b[100];
    scanf("%s %s",a,b);
    int value = strcmp(a,b);

    if(value<0){
        printf("A Choto");
    }
    else if(value>0){
        printf("B choto");
    }
    else{
        printf("Same\n");
    }


    return 0;
}