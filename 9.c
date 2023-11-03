#include <stdio.h>

int main() {
int n;
printf("Enter the value of n: ");
scanf("%d", &n);
int arr[n];
for (int i = 0; i < n; i++) {
printf("Enter a number: ");
scanf("%d", &arr[i]);
}
printf("Alternate elements from the end: ");
for (int i = n - 1; i >= 0; i -= 2) {
printf("%d ", arr[i]);
}
return 0;
}

