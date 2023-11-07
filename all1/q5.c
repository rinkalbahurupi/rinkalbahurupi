//Calculate the income tax based on given income and tax brackets.#include <stdio.h>
#include<stdio.h>
int main()
{
int i, tax;
printf("Enter your income: ");
scanf("%d", &i);
if (i <= 10000) 
{
tax = 0;
} 
else if (i <= 30000) 
{
tax = 0.1 * (i - 10000);
} 
else if (i <= 60000) 
{
tax = 0.1 * 20000 + 0.2 * (i - 30000);
} 
else 
{
tax = 0.1 * 20000 + 0.2 * 30000 + 0.3 * (i - 60000);
}
printf("Income: %d\n", i);
printf("Tax: %d\n", tax);
return 0;
}

