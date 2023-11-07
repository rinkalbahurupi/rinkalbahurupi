/*
0
2 4
4 8 8 
8 16 16 16
16 32 32 32 32
32 64 64 64 64 64 */
#include <stdio.h>

int main() {
    int i, n, p = 4, j = 1, c = 2;

    printf("Enter the number of rows: ");
    scanf("%d", &n);
printf("0\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <=1; j++) {
            printf("%d ", c);
        }
         for (j = 1; j <=i; j++)
{
        printf("%d ",p);
        }
        c=2*c;
        p=p*2;
        printf("\n");
    }

    return 0;
}

