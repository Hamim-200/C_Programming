#include <stdio.h>
#include <limits.h>
int main()
{

    int N;
    scanf("%d", &N);
    int ar[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &ar[i]);
    }

    int min = INT_MAX, pos;
    for (int i = 0; i < N; i++)
    {
        if (ar[i] < min)
        {
            min = ar[i];
            pos = i + 1;
        }
    }
    printf("%d %d", min, pos);
    return 0;
}