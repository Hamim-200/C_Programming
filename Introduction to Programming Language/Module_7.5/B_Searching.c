#include <stdio.h>
int main()
{

    int N;
    scanf("%d", &N);

    int ar[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &ar[i]);
    }

    int X;
    scanf("%d", &X);

    int ans = -1;
    for (int i = 0; i < N; i++)
    {
        if (ar[i] == X)
        {
            ans = i;
            break;
        }
    }
    printf("%d\n", ans);

    return 0;
}