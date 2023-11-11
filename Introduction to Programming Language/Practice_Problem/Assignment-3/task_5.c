#include <stdio.h>

void odd_even()
{
    int N, even_count = 0, odd_count = 0;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        int num;
        scanf("%d", &num);
        if (num % 2 == 0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }

    printf("%d %d\n", even_count, odd_count);
}

int main()
{
    odd_even();
    return 0;
}
