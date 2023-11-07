/*
4 5 4 3 2
3 4 5 4 3
2 3 4 5 4
1 2 3 4 5
*/

#include <stdio.h>

int main() {
int n;
scanf("%d", &n);
for (int i = 0; i < n; i++) {
int num = n - i;
for (int j = 0; j < n; j++) {
printf("%d ", num);
num = (num + 1) % n;
if (num == 0) num = n;
}
printf("\n");
}
return 0;
}



