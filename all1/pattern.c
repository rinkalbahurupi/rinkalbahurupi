#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int num = 1;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            for (int j = num + n +1; j >= num; j--) {
                printf("%d ", j);
            }
        } else {
            for (int j = num; j < num + 1; j++) {
                printf("%d ", j);
            }
        }
        num = num + n;
        printf("\n");
    }

    return 0;
}

