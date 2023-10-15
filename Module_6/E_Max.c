//Given a number N, and N numbers, find maximum number in these N numbers.

#include<stdio.h>
#include<limits.h>

int main(){

    int n,a,max=INT_MIN,min=INT_MAX;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a);
        if(a>max){
            max=a;
        }
        if(a<min){
            min=a;
        }
    }
    printf("%d %d\n",max,min);

    
    return 0;
}