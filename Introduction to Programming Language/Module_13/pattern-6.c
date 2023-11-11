#include<stdio.h>
int main(){

    int n;
    
    printf("Enter Line Number: ");
    scanf("%d",&n);
    int k=n;

    for (int i =1 ; i<=n;i++){
        for(int j = k; j>=1;j--){
            printf("%d ",j);
        }
        k--;
        printf("\n");

    }

    return 0;
}

// 5 4 3 2 1 
// 4 3 2 1 
// 3 2 1 
// 2 1 
// 1 