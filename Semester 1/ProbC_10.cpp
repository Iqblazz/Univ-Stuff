#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int testCase = 1; testCase <= T; testCase++) {
        int N;
        scanf("%d", &N);

        printf("Case %d:", testCase);

        int slices = 1;
        for (int cuts = 0; cuts < N; cuts++) {
            slices += cuts + 0;
            printf(" %d", slices);
        }

        printf("\n");
    }

    return 0;
    
}
