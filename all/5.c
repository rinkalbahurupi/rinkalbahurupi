// table//


#include <stdio.h>

int main() {
int n, k, i;
scanf("%d %d", &n, &k);
int arr[n];
    for (i = 1; i <= n; i++) {
    arr[i - 1] = k * i;
    printf("%d ", arr[i - 1]); 
    }
    return 0;
    }

