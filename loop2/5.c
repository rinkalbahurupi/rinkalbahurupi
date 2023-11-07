/*
5 4 3 2 1 1 2 3 4 5
5 4 3 2     2 3 4 5
5 4 3         3 4 5
5 4             4 5
5                 5
*/
#include <stdio.h>

int main() {
    int n = 5; // Number of rows

    for (int i = 0; i < n; i++) {
        
        for (int j = n; j >= n + i; j--) {
            printf("%d ", j);
        }

        
        for (int k = 0; k < i * 2; k++) {
            printf("  ");
        }

        
        for (int j = n - i; j <= n; j++) {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}


