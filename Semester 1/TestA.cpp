#include <stdio.h>

long long int reverseNumber(long long int n) {
    long long int rev = 0;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

int main() {
    int T;
    scanf("%d", &T);

    for (int caseNum = 1; caseNum <= T; ++caseNum) {
        long long int N;
        scanf("%lld", &N);

        long long int rev_N = reverseNumber(N);
        long long int result = N + rev_N;

        printf("Case #%d: %lld\n", caseNum, result);
    }

    return 0;
    
}
