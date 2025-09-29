#include <stdio.h>

// Fungsi rekursif untuk menghitung Jobonacci ke-N
int jobonacci(int n) {
    // Basis kasus: jobonacci[0] = 0, jobonacci[1] = 1, jobonacci[2] = 1
    if (n == 0) return 0;
    if (n == 1 || n == 2) return 1;

    // Langkah rekursif: jobonacci[x] = jobonacci[x-1] + jobonacci[x-3]
    return jobonacci(n - 1) + jobonacci(n - 3);
}

int main() {
    // Membaca input N
    int N;
    scanf("%d", &N);

    // Menghitung dan mencetak hasil Jobonacci ke-N
    int result = jobonacci(N);
    printf("%d\n", result);

    return 0;
}

