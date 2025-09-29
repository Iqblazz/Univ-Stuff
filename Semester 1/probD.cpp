#include <stdio.h>
#include <string.h>

void reverseString(char *str) {
    if (*str) {
        reverseString(str + 1);
        printf("%c", *str);
    }
}

int main() {
    int T;
    scanf("%d", &T);
    getchar(); 

    for (int i = 1; i <= T; i++) {
        char kalimat[1001];
        fgets(kalimat, sizeof(kalimat), stdin);
        kalimat[strcspn(kalimat, "\n")] = '\0'; 

        printf("Case #%d: ", i);
        reverseString(kalimat);
        printf("\n");
    }

    return 0;
}

