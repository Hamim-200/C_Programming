#include <stdio.h>
int main()
{

    int x;
    scanf("%d", &x);

    int digit1 = x / 10;
    int digit2 = x % 10;
    if (digit1 == 0 || digit2 == 0)
    {
        printf("YES");
        return 0;
    }

    if (digit1 % digit2 == 0 || digit2 % digit1 == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}