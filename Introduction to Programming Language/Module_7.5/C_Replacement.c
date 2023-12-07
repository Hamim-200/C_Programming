#include <stdio.h>
int main()
{

    int N;
    scanf("%d", &N);
    int ar[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &ar[i]);
    }

    for (int i = 0; i < N; i++)
    {
        if (ar[i] < 0)
        {
            printf("2 ");
        }
        else if(ar[i]>0){
            printf("1 ");
        }
        else{
            printf("%d ",ar[i]);
        }
    }
    return 0;
}