//Write a C program that takes three numbers as input and finds the largest of the three. Use only a single if statement
#include <stdio.h>

int main() {
int a, b, c, n;
printf("Enter three numbers: ");
scanf("%d %d %d", &a, &b, &c);
n = a; 
if (b > n)
n = b;
if (c > n)
n = c;
printf("%d\n",n);
return 0;
}

