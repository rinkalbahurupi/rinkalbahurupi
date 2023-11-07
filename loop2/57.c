// consruct a flowchart to dtermine the hcf of given n number input  a value from  the input n number from the user.//
#include<stdio.h>

int main() {
    int m, n, i, hcf;

    printf("Enter two numbers: ");
    scanf("%d %d", &n, &m);

    hcf = 1;

    for (i = 1; i <= n && i <= m; i++) {
        if (n % i == 0 && m % i == 0) {
            hcf = i;
        }
    }
 printf(" %d  %d  %d\n", n, m, hcf);
 return 0;
}

