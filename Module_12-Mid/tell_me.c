#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);
        int A[N];

        for (int i = 0; i < N; ++i) {
            scanf("%d", &A[i]);
        }
        
        int X;
        scanf("%d", &X);

        int ans = 0;
        for (int i = 0; i < N; ++i) {
            if (A[i] == X) {
                ans = 1;
                break;
            }
        }

        if (ans) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    

    return 0;
}
