//Given N numbers. Count how many of these values are even, odd, positive and negative.

#include<stdio.h>
int main(){

    int n,a;
    int even = 0,odd=0,pos=0,neg=0;
    scanf("%d",&n);

    for(int i=1;i<=n;i=i+1){
        scanf("%d",&a);

       if(a%2==0){
        //even
        even++;
       } 
       else {
        //odd
        odd++;
       }
      

       if(a>0){
        //positive
        pos++;
       }
       else if(a<0){
        //negative
        neg++;
       }
    }

    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n",even,odd,pos,neg);

    return 0;
}