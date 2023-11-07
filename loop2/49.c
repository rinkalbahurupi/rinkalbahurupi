//if the commmon factor of two no a & b as  1 then a nad b are prime no //
#include <stdio.h>
int main() 
{
int i, m, n;
printf("Enter two numbers: ");
scanf("%d %d", &m, &n);
int c = 0; 
for (i = 1; i <= m && i <= n; i++) 
{
if (m % i == 0 && n % i == 0) 
{
c++;
}
}
if (c == 1) 
{
printf("Co-prime numbers\n");
} else 
{
printf("Not co-prime numbers\n");
}
return 0;
}

