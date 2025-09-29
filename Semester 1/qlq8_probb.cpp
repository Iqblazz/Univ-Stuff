#include <stdio.h>

int main() {
    int N, M, Q;
    scanf("%d %d %d", &N, &M, &Q);

    // Inisialisasi array 2D dengan angka 0
    int array[N][M];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            array[i][j] = 0;
        }
    }

    // Proses query
    for (int k = 0; k < Q; k++) {
        int X, Y, A;
        scanf("%d %d %d", &X, &Y, &A);
        array[X][Y] = A;
    }

    // Output array 2D setelah menyelesaikan semua query
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d", array[i][j]);
            if (j < M - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

