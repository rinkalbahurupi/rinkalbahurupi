#include <stdio.h>

int main() {
    long long N;
    scanf("%lld", &N);

    while (N % 2 == 0) {
        N /= 2;
    }

    // If N is 1 after dividing by 2 repeatedly, then it can be represented as 2^x * 3^y
    if (N == 1) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}

