#include <stdio.h>

// Fungsi untuk menghitung nilai deret Jojonanci ke-N
int jojonanci(int N, int X, int Y) {
    if (N == 0) {
        return X;
    } else if (N == 1) {
        return Y;
    } else {
        return jojonanci(N - 1, X, Y) - jojonanci(N - 2, X, Y);
    }
}

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 1; i <= T; i++) {
        int N, X, Y;
        scanf("%d %d %d", &N, &X, &Y);

        int result = jojonanci(N, X, Y);

        printf("Case #%d: %d\n", i, result);
    }

    return 0;
}

