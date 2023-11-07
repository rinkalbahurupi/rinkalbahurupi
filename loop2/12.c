/*
1
3 2
6 5 4
10 9 8 7
*/
#include <stdio.h>

int main() {
    int n, i, j, a = 1;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        int b = i * (i + 1) / 2; 
        for (j = 1; j <= i; j++) {
            printf("%d ", b);
            b--;
        }
        printf("\n");
    }
    return 0;
}

