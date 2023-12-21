#include <stdio.h>
int main()
{

    int t;
    scanf("%d", &t);
    while (t--)
    {
        char S[101];
        scanf("%s", &S);

        int len = strlen(S);

        if (len > 10)
        {
            printf("%c%d%c\n", S[0], len - 2, S[len - 1]);
        }
        else
        {
            printf("%s\n", S);
        }
    }
    return 0;
}