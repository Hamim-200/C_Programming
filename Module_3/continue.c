#include<stdio.h>
int main(){

    for(int i=1 ;i<=15;i++){

        if(i==5){
            continue;     
        }
        printf("%d\n",i);
    }
    return 0;
}