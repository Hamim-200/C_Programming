#include<stdio.h>
int main(){

    int N;
    scanf("%d",&N);
    int pos_sum = 0;
    int neg_sum = 0;

    for(int i =0;i<N;i++){
        int V;
        scanf("%d",&V);

        if(V>0){
            pos_sum = pos_sum+V;
        }
        else{
            neg_sum = neg_sum+V;
        }

    }
    printf("%d %d", pos_sum,neg_sum);
    return 0;
}