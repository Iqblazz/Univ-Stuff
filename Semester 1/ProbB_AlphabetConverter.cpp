#include <stdio.h>
#include <string.h>

int main() {
    FILE *fptr;
    fptr = fopen("testdata.in", "r");
    int t;
    fscanf(fptr, "%d", &t);

    for (int i = 0; i < t; i++) {
        char letters[1000];
        fscanf(fptr, " %[^\n]", letters);
        int len = strlen(letters);
        int count[26] = {0};
        char alphabet[26];
        
        for (int j = 0; j < 26; j++) {
            alphabet[j] = 'A' + j;
        }

        int u;
        fscanf(fptr, "%d", &u);
        int check[26] = {0};

        for (int j = 0; j < u; j++) {
            char a, b;
            fscanf(fptr, "%*c%c %c", &a, &b);
            if (check[a - 'A'] == 0) {
                for (int k = 0; k < len; k++) {
                    if (letters[k] == a) {
                        letters[k] = b;
                    }
                }
                check[a - 'A'] = 1;
            }
        }

        for (int j = 0; j < len; j++) {
            if (letters[j] >= 'A' && letters[j] <= 'z') {
                count[letters[j] - 'A']++;
            }
        }

        for (int j = 0; j < 26; j++) {
            if (count[j] != 0) {
                printf("%c %d\n", alphabet[j], count[j]);
            }
        }
    }

    fclose(fptr);
    return 0;
}
