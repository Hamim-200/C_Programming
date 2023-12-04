#include <stdio.h>

int main() {
    int N, M, X;
    scanf("%d %d", &N, &M); 
    int A[N][M];

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            scanf("%d", &A[i][j]);
        }
    }

    scanf("%d", &X); 

    int flag = 0;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            if (A[i][j] == X) {
                flag = 1;
                break;
            }
        }
        if (flag) {
            break;
        }
    }

    if (flag) {
        printf("will not take number\n");
    } else {
        printf("will take number\n");
    }

    return 0;
}
