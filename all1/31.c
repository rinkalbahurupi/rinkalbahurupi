//construct a array to show how to store the first 100 natural number in an array and then show them in the reverse squence.
#include <stdio.h>
int main() {
int n = 100;
int arr[n];
for (int i = 0; i < n; i++) {
arr[i] = i + 1; 
}
printf("Natural numbers in reverse sequence:\n");
for (int i = n - 1; i >= 0; i--) {
printf("%d ", arr[i]);
}
return 0;
}

