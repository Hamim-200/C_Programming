#include<stdio.h>
int main(){

    int A ;
    long long int B;
    float C;
    char ch;

    scanf("%d",&A);
    printf("%d\n",A);

    scanf("%lld",&B);
    printf("%lld\n",B);

    scanf("%f",&C);
    printf("%.2f\n",C);

    scanf(" %c",&ch);
    printf("%c",ch);

    return 0;
}