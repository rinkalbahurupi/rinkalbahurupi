//create an array to store the perfect no.
 
#include <stdio.h>
    int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Perfect numbers up to %d are:\n", n);
    for (int i = 1; i <= n; i++) {
    int s = 0;
    for (int j = 1; j <= i / 2; j++) {
    if (i % j == 0) {
    s += j;
    }
    }
    if (s == i) {
    printf("%d\n", i);
    }
    }
    return 0;
    }

