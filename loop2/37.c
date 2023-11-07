/*
1 2 3 4 
8 7 6 5
9 10 11 12
16 15 14 13
*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    int num = 1;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            for (int j = num + n - 1; j >= num; j--) {
                printf("%d ", j);
            }
        } else {
            for (int j = num; j < num + n; j++) {
                printf("%d ", j);
            }
        }
        num = num + n;
        printf("\n");
    }

    return 0;
}

