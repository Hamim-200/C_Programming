#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);

    int a[n];
    for(int i =0;i<n;i++){
        scanf("%d",&a[i]);
    }

    int cnt[7] = {0};
    for(int i =0;i<n;i++){
        if(a[i] == 0){
            cnt[0]++;
        }
        if(a[i] == 1){
            cnt[1]++;
        }
        if(a[i] == 2){
            cnt[2]++;
        }
    }
    printf("0 - %d\n",cnt[0]);
    printf("1 - %d\n",cnt[1]);
    printf("2 - %d\n",cnt[2]);

    
    return 0;
}