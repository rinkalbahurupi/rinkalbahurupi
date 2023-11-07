//"Write a program to find the sum of following series: 1 + 2 + 6 + 24 + 120 . . . . . N terms if N= 6 then series becomes 1+2+6+24+120+720 , then output will be some of this series -> 873"
#include <stdio.h>

int main() {
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    int sum = 0, term = 1;
    for (int i = 1; i <= N; i++) {
        term *= i; 
        sum += term; 
    }

    printf("The sum of the series %d terms is: %d\n", N, sum);
    return 0;
}

