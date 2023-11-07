///Write a program to show how to find the sum of all the numbers that are divisible by P but not divisible by Q within a given range. (Input lower limit, upper limit, P, and Q from the user)
#include <stdio.h>

int main() {
    int sum = 0, p, q, ll, ul;

    printf("Enter the lower limit: ");
    scanf("%d", &ll);

    printf("Enter the upper limit: ");
    scanf("%d", &ul);

    printf("Enter P: ");
    scanf("%d", &p);

    printf("Enter Q: ");
    scanf("%d", &q);

    for (int i = ll; i <= ul; i++) {
        if (i % p == 0 && i % q != 0)
            sum = sum + i;
    }

    printf("Sum of numbers divisible by %d but not divisible by %d within the range [%d, %d]: %d\n", p, q, ll, ul, sum);

    return 0;
}

