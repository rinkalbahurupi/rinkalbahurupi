//Find the second max of 3 numbers.
#include <stdio.h>

int main() 
{
int a, b, c;
printf("Enter three numbers: ");
scanf("%d %d %d", &a, &b, &c);
int max1, max2;
if (a >= b && a >= c) 
{
max1 = a;
}
 else if (b >= a && b >= c) {
 max1 = b;
} 
else 
{
max1 = c;
}
if ((a >= b && a < c) || (a >= c && a < b))
 {
max2 = a;
} 
else if ((b >= a && b < c) || (b >= c && b < a)) {
max2 = b;
} 
else 
{
max2 = c;
}
  printf("The second maximum is: %d\n", max2);
 return 0;
}

