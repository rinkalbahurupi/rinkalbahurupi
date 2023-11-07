// COUNT THE NUMBERS OF PAIRS IN THE FROM WHOSE SUM IS EQUAL T HE GIVEN VALUSE X.
#include <stdio.h>

int main() {
    int n, x;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
    printf("Enter the number: ");
    scanf("%d", &arr[i]);
    }
    printf("Enter the value of x: ");
    scanf("%d", &x);
    int count = 0;
    for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
    if (arr[i] + arr[j] == x) {
    count++;
    }
    }
    }
    printf(" %d %d\n", x, count);
    return 0;
    }

