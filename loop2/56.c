//construct a flowchart to show the logic of printing the first n fibonacci number.//
#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int fib1 = 0; // First Fibonacci number
    int fib2 = 1; // Second Fibonacci number

    printf("Fibonacci series: %d %d", fib1, fib2);

    for (int i = 3; i <= n; i++) {
        int nextFib = fib1 + fib2; // Calculate the next Fibonacci number
        printf(" %d", nextFib);

        fib1 = fib2; // Update fib1 to the value of fib2
        fib2 = nextFib; // Update fib2 to the value of the next Fibonacci number
    }

    return 0;
}


