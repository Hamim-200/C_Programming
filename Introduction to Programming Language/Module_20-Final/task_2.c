#include <stdio.h>
int main()
{

    int tst;
    scanf("%d", &tst);

    while (tst--)
    {
        long long int M, A, B, C,missing_number;
        scanf("%lld %lld %lld %lld", &M, &A, &B, &C);

        if (A * B * C != 0 && M % (A * B * C) == 0)
        {
            missing_number = M / (A * B * C);
            printf("%lld\n", missing_number);
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}