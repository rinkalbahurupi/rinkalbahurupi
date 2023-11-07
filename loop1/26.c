//can you tell if a number is a special type of number called a 'prime number'? A prime number is a number that is only divisible by 1 and itself, and it doesn't have any other factors. for example, the number 7 is a prime number because it can only be divided by 1 and 7 without leaving a remainder. However, the number 12 is not a prime number because it has other factors, such as 2, 3, 4, and 6, in addition to 1 and 12. Can you figure out if a given number is prime or not?
#include<stdio.h>
int main()
{
int n,i,c;
printf("enter the number,n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i==0)
{
c=c+1;
}}
 if(c==2)
{
printf("prime no\n");
}
else
{
printf("not prime no\n");
}
return 0;
}
