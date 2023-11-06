#include <stdio.h>
int main()
{

    int n, s, k;
    printf("Enter Line Number: ");
    scanf("%d", &n);
    int l = ((n - 1) / 2) + 6;
    s = n + 4;
    k = 1;
    for (int i = 1; i <= l; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }
        s--;
        k = k + 2;
        printf("\n");
    }

    for (int i = 0; i <5; i++)
    {
        for (int j = 1; j <=5; j++)
        {            
            printf(" ");
        }
        for (int j = 0; j < n; j++)
        {            
            printf("*");
        }
        
        printf("\n");
    }
    return 0;
}
