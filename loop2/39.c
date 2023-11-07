/*
      *
     * *
    *   *
   *     *
    *   *
     * *
      *
      */
      #include <stdio.h>

int main() {
    int n, i, j, k;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        
        for (space = 1; space <= n - i; space++) {
            printf(" ");
        }
        printf("*");
        if (i > 1) {
            for (j = 1; j <= 2 * i - 3; j++) {
                printf(" ");
            }
            printf("*");
        }

        printf("\n");
   }
    for (i = n - 1; i >= 1; i--) {

        for (k = 1; k <= n - i; k++) {
            printf(" ");
        }
        printf("*");

        if (i > 1) {
            for (j = 1; j <= 2 * i - 3; j++) {
                printf(" ");
            }
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

