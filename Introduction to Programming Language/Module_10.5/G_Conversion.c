#include <stdio.h>
int main()
{

    char S[100005];
    scanf("%s", &S);

    for (int i = 0; S[i]; i++)
    {
        if (S[i] == ',')
        {
            S[i] = ' ';
        }
        else if ('a' <= S[i] && S[i] <= 'z')
        {
            S[i] = S[i] - 32;
            // S[i] = S[i] - 'a' + 'A';
        }
        else if ('A' <= S[i] && S[i] <= 'Z')
        {
            // S[i] = S[i] - 'A' + 'a';
            S[i] = S[i] + 32;
        }
    }
    printf("%s\n", S);

    return 0;
}