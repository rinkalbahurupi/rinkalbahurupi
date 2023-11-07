//Write a program to show how to find all even natural numbers that are divisible by 7 in a given range. (Input lower and upper limit of the range from the user)
#include<stdio.h>
int main()
{
int n,i=1;
scanf("%d",&n);
while(i<=n)
{
if(i%2==0 && i%7==0)
{
printf("%d",i);
}
i=i+1;
}
return 0;
}
