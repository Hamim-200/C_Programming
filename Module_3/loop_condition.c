#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    for(int i=1 ;i<=n;i++){
        if(i%2==0){
            printf("%d-Even \n",i);
        }
        else{
            printf("%d-ODD \n",i);
        }
    }

    return 0;
}