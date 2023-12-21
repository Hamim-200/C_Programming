#include <stdio.h>
#include <string.h>

int main()
{
    char s[10000001];
    scanf("%s", s);

    int cnt[26] = {0};
    int length = strlen(s);

    for (int i = 0; i < length; i++)
    {
        int value = s[i] - 'a';
        cnt[value]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (cnt[i] != 0)
        {
            printf("%c : %d\n", i + 'a', cnt[i]);
        }
    }

    return 0;
}
