/*
* * * * *
*       *
*       *
*       *
* * * * *
*
*
*
*
*/
#include <stdio.h>

int main() {
    int i, n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
    if (i == 1 || j == 1 || j == n || i == n) {
    printf("* ");
    } else {
    printf("  ");
     }
     }
     printf("\n");
    }
    for (i = 1; i <= n; i++) {
    
    printf("*\n");
    }
    return 0;
}

