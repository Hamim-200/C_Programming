#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - 2; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= n ; j++)
        {
            printf("* \n");
        }
       // printf("");
    }
    return 0;
}