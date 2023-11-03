#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int a, b;
        scanf("%d %d", &a, &b);
        int c = a < b ? a : b;
        printf("%d\n", c);
    }
    
    return 0;
}

