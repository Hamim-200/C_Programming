#include <stdio.h>
int main()
{

    int n, s, k;

    printf("Enter Line Number: ");
    scanf("%d", &n);
    s = n - 1;
    k = 1;

    for (int i = 1; i <= (n * 2) - 1; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }

        // line sesh
        if (i <= n - 1)
        {
            s--;
            k += 2;
        }
        else{
            s++;
            k-=2;
        }
        printf("\n");
    }

    return 0;
}


//     *
//    ***
//   *****
//  *******
// *********
//  *******
//   *****
//    ***
//     *