//create an array to print armstrong number.
#include <stdio.h>
int main() {
int n;
printf("Enter a number: ");
scanf("%d", &n);
printf("Armstrong numbers up to %d:\n", n);
for (int i = 1; i <= n; i++) {
int sum = 0;
int p = i;
while (p > 0) {
int r = p % 10;
sum += r * r * r;
p /= 10;
}
if (sum == i) {
printf("%d\n", i);
}
}
return 0;
}

