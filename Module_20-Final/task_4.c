#include<stdio.h>
int main(){

    int N,M;
    scanf("%d %d",&N,&M);
    int a[N][M];

    for(int i=0;i<N;i++){
        for(int j= 0;j<M;j++){
            scanf("%d",&a[i][j]);
        }
    }
  
    for(int i=0;i<M;i++){
        printf("%d ",a[N-1][i]);
    }
    printf("\n");

    for(int i=0;i<N;i++){
        printf("%d ",a[i][M-1]);
    }
    return 0;
}