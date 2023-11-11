#include<stdio.h>
int main(){
    int tk;
    printf("Enter Amount:");
    scanf("%d",&tk);

    if(tk>=100){
        printf("Burger khabo");
    }
    else if(tk >= 50){
        printf("Fuchka Khabo");
    }
    else{
        printf("Khabo na");
    }
    return 0;
}