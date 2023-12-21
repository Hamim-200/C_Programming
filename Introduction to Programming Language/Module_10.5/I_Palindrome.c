#include <stdio.h>
int main()
{

    char S[1001];
    scanf("%s", &S);

    int len = strlen(S);
    int is_palindrom = 1;

    int left = 0, right = len - 1;

    while (left < right)
    {
        if (S[left] != S[right])
        {
            is_palindrom = 0;
            break;
        }
        left++;
        right--;
    }

    if (is_palindrom)
    {
        printf("YES \n");
    }
    else
    {
        printf("NO \n");
    }

    return 0;
}