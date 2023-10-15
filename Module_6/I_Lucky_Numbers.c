#include<stdio.h>
int main()
{
    int a,x,y;
    scanf("%d",&a);

    x=a/10;
    y=a%10;

    if(x>0&&y!=0)
    {
        if(x%y==0||y%x==0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
