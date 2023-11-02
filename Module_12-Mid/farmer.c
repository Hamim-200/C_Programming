#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int T, M1, M2, D, day_save;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d %d %d", &M1, &M2, &D);
        day_save = D - (M1 * D) / (M1 + M2) ;

        if (day_save < 0)
        {
            day_save = 0;
        }
        printf("%d\n", day_save);
    }

    return 0;
}
