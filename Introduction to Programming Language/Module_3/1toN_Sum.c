#include<stdio.h>
int main(){
    int sum = 0;
    int n;
    scanf("%d",&n);

    for(int i=1 ;i<=n;i++){
        printf("%d\n",i);
        sum = sum+i;
    }
    printf("Sum = %d",sum);        

    return 0;
}