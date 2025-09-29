#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Struktur untuk menyimpan informasi tanaman
struct Plant {
    int number;
    char name[42]; // 40 karakter + 1 untuk spasi + 1 untuk null-terminator
};

// Fungsi pembanding untuk pengurutan qsort
int comparePlants(const void *a, const void *b) {
    return strcmp(((struct Plant *)a)->name, ((struct Plant*)b)->name);
}

int main() {
    FILE *inputFile = fopen("testdata.in", "r");
    if (inputFile == NULL) {
        fprintf(stderr, "Gagal membuka file input.\n");
        return 1;
    }

    int N;
    fscanf(inputFile, "%d", &N);

    // Membaca data tanaman ke dalam array
    struct Plant plants[N];
    for (int i = 0; i < N; i++) {
        fscanf(inputFile, "%d#%40[^\n]", &plants[i].number, plants[i].name);
    }
    fclose(inputFile);


    // Mengurutkan array tanaman berdasarkan nama
    qsort(plants, N, sizeof(struct Plant), comparePlants);

    // Menulis output ke layar atau file
    for (int i = 0; i < N; i++) {
        printf("%d %s\n", plants[i].number, plants[i].name);
    }

 
    return 0;
}
