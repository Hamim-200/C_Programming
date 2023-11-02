#include<stdio.h>

// return_type name (parameter){
//     code
//     return what?
// }

int sum(int x , int y){
    int sum = x+y;
    return sum;
}
int main(){
    // int s = sum(10,20);
    // printf("%d",s);
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",sum(10,20));
    return 0;
}