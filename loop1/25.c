//"Can you write a program that asks the user to enter a number and then determines if that number is a special type of number called a 'perfect number'? A perfect number is a number where the sum of all its factors (excluding the number itself) is equal to the number itself.
#include<stdio.h>
int main()
{
int n,i,sum=0;
printf("enter the number,n");
scanf("%d",&n);
for(i=1;i<n;i++)
{
if(n%i==0)
{
sum=sum+i;
}
}
if(sum==n)
{
printf("perfect no\n");
}
else{
printf("not perfect no");
}
return 0;
}
