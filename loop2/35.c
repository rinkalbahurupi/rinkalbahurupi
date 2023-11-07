/*
  10
  10 8
  10 8 6 
  10 8 6 4
  10 8 6 4 2
  */
#include <stdio.h>

int main() {
int n;
printf("Enter the number: ");
scanf("%d", &n);
 for (int i = 1; i <= n; i++) {
 int k = 10; 
 for (int k = 1; k<= n - i; k++) {
printf(" ");
}
for (int j = 1; j <= i; j++) {
printf("%d ", k);
k -= 2;
}
printf("\n");
}
return 0;
}

