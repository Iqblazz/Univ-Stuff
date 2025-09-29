#include <stdio.h>
#include <string.h>

int isEven(int count) {
    return count % 2 == 0;
}

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 1; i <= T; i++) {
        char S[100001];
        scanf("%s", S);

        int count[26] = {0}; // Array untuk menghitung jumlah kemunculan setiap huruf
        int uniqueCount = 0;

        // Menghitung jumlah kemunculan setiap huruf pada nama pengguna
        for (int j = 0; S[j] != '\0'; j++) {
            if (count[S[j] - 'a'] == 0) {
                uniqueCount++;
            }
            count[S[j] - 'a']++;
        }

        // Menentukan jenis kelamin berdasarkan jumlah huruf unik
        printf("Case #%d: %s\n", i, isEven(uniqueCount) ? "Yay" : "Ewwww");
    }

    return 0;
}

