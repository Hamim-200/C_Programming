#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N); 
    int A[N][N];

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            scanf("%d", &A[i][j]);
        }
    }

    int primaryDiagonalSum = 0;
    int secondaryDiagonalSum = 0;

    for (int i = 0; i < N; ++i) {
        primaryDiagonalSum = primaryDiagonalSum + A[i][i];
        secondaryDiagonalSum = secondaryDiagonalSum + A[i][N - i - 1];
    }

    int absoluteDifference = abs(primaryDiagonalSum - secondaryDiagonalSum);

    printf("%d\n", absoluteDifference);

    return 0;
}
