#include <stdio.h>
int main()
{

    int N, M;
    scanf("%d %d", &N, &M);
    int a[N][M];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int flag = 1;
    if (N != M)
    {
        flag = 0;
    }
    for (int i = 0; i < N; i++)
    {

        if (a[i][i] != 1 || a[i][M - 1 - i] != 1)
        {
            flag = 0;
            break;
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (i != j && i != (M - 1 - j) && a[i][j] != 0)
            {
                flag = 0;
                break;
            }
        }
    }

    if (flag == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO");
    }
    return 0;
}