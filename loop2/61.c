// write a program to print all prime number sum from 1 to n.//
#include <stdio.h>

int is_prime(int num) {
    if (num <= 1)
        return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int n, s = 0;
    scanf("%d", &n);

    for (int i = 2; i <= n; i++) {
        if (is_prime(i)) {
            s += i;
        }
    }

    printf("Sum of prime numbers from 1 to %d: %d\n", n, s);

return 0;
}

