//Write a Python program that reads a positive integer 'n', and calculates and prints the sum of the first 'n' prime number
#include <stdio.h>

int main() {
int n, i, b, c = 2, k = 0, s = 0;
scanf("%d", &n);
for (b = 1; b <= c; b++) 
{
for (i = 1; i <= n; i++) 
{  
k = 0;
for (int j = 1; j <= i; j++) 
{
if (i % j == 0) 
{
k = k + 1;
}
}
if (k == 2) 
{
s = s + i;
}
}
}
printf("%d\n", s);
return 0;
}

