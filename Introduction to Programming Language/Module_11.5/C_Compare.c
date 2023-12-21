#include <stdio.h>
int main()
{

    char X[21], Y[21];
    scanf("%s %s", X, Y);

    int comparison = strcmp(X, Y);

    if (comparison < 0)
    {
        printf("%s", X);
    }
    else if (comparison > 0)
    {
        printf("%s", Y);
    }
    else
    {
        printf("%s", X);
    }

    return 0;
}