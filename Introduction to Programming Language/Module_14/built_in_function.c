#include<stdio.h>
#include<math.h>

int main(){
    double x;
    scanf("%lf",&x);

    int ans=ceil(x);
    printf("%d\n",ans);

    int ans2=floor(x);
    printf("%d\n",ans2);

    int ans3=round(x);
    printf("%d\n",ans3);

    int ans4=sqrt(x);
    printf("%d\n",ans4);

    // int ans5=pow(x);
    // printf("%d\n",ans5);
    //pow
    double a,b;
    scanf("%lf %lf",&a,&b);
    double ans = pow(a,b);
    printf("%lf\n",ans);
    
    return 0;
}