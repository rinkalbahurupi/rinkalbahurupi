// develop a flowchart how to determine all the digit amstrong number//
#include <stdio.h>
#include <math.h> 

int main() {
    int n, r, sum = 0, t;

    printf("Enter a number: ");
    scanf("%d", &n);

    t = n; 

    while (t > 0) {
        r = t % 10;
        sum += pow(r, 3);
        t /= 10;
    }

    if (sum == n) {
        printf("%d is an Armstrong number.\n", n);
    } else {
        printf("%d is not an Armstrong number.\n", n);
    }

    return 0;
}

