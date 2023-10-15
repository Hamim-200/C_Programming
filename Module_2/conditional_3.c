#include<stdio.h>
int main(){
    int tk;
    printf("Enter Amount:");
    scanf("%d",&tk);

    if(tk>=5000){
        printf("CoxsBazar jabo \n");

        if(tk >= 10000){
            printf(" SaintMartin Jabo\n");
        }
        else{
            printf("Return Home");
        }
    }

    else{
        printf("NO TOUR");
    }
    return 0;
}