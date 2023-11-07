//Write a program to show how to obtain the HCF and LCM of two numbers. (input two numbers from the user)
#include <stdio.h>
int main() {
    int a, b, h, l, p, r;
 printf("Enter two numbers, a and b: ");
    scanf("%d %d", &a, &b);
    int x = a;
    int y = b;
    while (y != 0) {
        r = x % y;
        x = y;
        y = r;
         }
    h = x; 
    l = (a * b) / h;
    printf("HCF: %d\n", h);
    printf("LCM: %d\n", l);

    return 0;
}

