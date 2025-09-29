#include <stdio.h>

#define MAX_SIZE 100

// Fungsi rekursif untuk menghitung jumlah lantai yang harus diganti
void hitungLantai(char rumah[MAX_SIZE][MAX_SIZE], int x, int y, int N, int M, int* count) {
    // Cek batas array dan karakter pada posisi (x, y)
    if (x < 0 || x >= N || y < 0 || y >= M || rumah[x][y] == '#' || rumah[x][y] == 'x') {
        return;
    }

    // Tandai lantai yang sudah dikunjungi
    rumah[x][y] = 'x';
    (*count)++;

    // Pemanggilan rekursif ke 4 arah
    hitungLantai(rumah, x - 1, y, N, M, count); // atas
    hitungLantai(rumah, x + 1, y, N, M, count); // bawah
    hitungLantai(rumah, x, y - 1, N, M, count); // kiri
    hitungLantai(rumah, x, y + 1, N, M, count); // kanan
}

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 1; t <= T; ++t) {
        int N, M;
        scanf("%d %d", &N, &M);

        char rumah[MAX_SIZE][MAX_SIZE];
        for (int i = 0; i < N; ++i) {
            scanf("%s", rumah[i]);
        }

        int totalLantaiDiganti = 0;

        // Loop untuk mencari sumber air (S) dan menghitung jumlah lantai yang harus diganti
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < M; ++j) {
                if (rumah[i][j] == 'S') {
                    int count = 0;
                    hitungLantai(rumah, i, j, N, M, &count);
                    totalLantaiDiganti += count - 1; // Kurangi satu karena sumber air tidak dihitung
                }
            }
        }

        printf("Case #%d: %d\n", t, totalLantaiDiganti);
    }

    return 0;
}

