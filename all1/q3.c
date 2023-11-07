//Write a Java program that reads a positive integer 'n', and calculates and prints its prime factorization.

#include <stdio.h>

int main() {
int n, i;
printf("Enter a positive integer: ");
scanf("%d", &n);
printf("Prime factorization of %d: ", n);
for (i = 2; i <= n; i++) {
while (n % i == 0) {
printf("%d ", i);
n /= i;
}
}
printf("\n");
return 0;
}

