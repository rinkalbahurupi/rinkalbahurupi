#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int B[N];
    for (int i = 0; i < N; ++i) {
        scanf("%d", &B[i]);
    }

    int A[N];

    // Try to find a valid array A
    for (int i = 0; i < N; ++i) {
        if (i == 0) {
            A[i] = B[i];
        } else {
            A[i] = (B[i] + A[i - 1]) % 2;
        }
    }

    // Check if the calculated array A matches the given array B
    if ((A[N - 1] + A[0]) % 2 == B[N - 1]) {
        printf("Valid array A exists:\n");
        for (int i = 0; i < N; ++i) {
            printf("%d ", A[i]);
        }
        printf("\n");
    } else {
        printf("No valid array A exists.\n");
    }

    return 0;
}

