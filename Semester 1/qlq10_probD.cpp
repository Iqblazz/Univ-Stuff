#include <stdio.h>

int countLightning(int N, int A, int B, char *sound) {
    int lightningCount = 0;
    int consecutiveLightning = 0;

    for (int i = 0; i < N; i++) {
        if (sound[i] == '1') {
            consecutiveLightning++;
        } else {
            if (consecutiveLightning >= A && consecutiveLightning <= B) {
                lightningCount++;
            }
            consecutiveLightning = 0;
        }
    }

    // Check again after the loop in case the lightning lasts until the end
    if (consecutiveLightning >= A && consecutiveLightning <= B) {
        lightningCount++;
    }

    return lightningCount;
}

int main() {
    FILE *inputFile = fopen("testdata.in", "r");
    if (inputFile == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    int T;
    if (fscanf(inputFile, "%d", &T) != 1) {
        printf("Error reading the number of test cases.\n");
        fclose(inputFile);
        return 1;
    }

    for (int testCase = 1; testCase <= T; testCase++) {
        int N, A, B;
        if (fscanf(inputFile, "%d %d %d", &N, &A, &B) != 3) {
            printf("Error reading test case parameters.\n");
            fclose(inputFile);
            return 1;
        }

        char sound[N + 1];
        if (fscanf(inputFile, "%s", sound) != 1) {
            printf("Error reading the sound string.\n");
            fclose(inputFile);
            return 1;
        }

        int result = countLightning(N, A, B, sound);

        printf("Case #%d: %d\n", testCase, result);
    }

    fclose(inputFile);
    return 0;
}

