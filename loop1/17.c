//Write a program to show how to find the sum of all the numbers that are divisible by P but not divisible by Q within a given range. (Input lower limit, upper limit, P, and Q from the user)
#include<stdio.h>
int main()
{
int sum=0,p,q,n,i,ll,ul;
printf("enter the num,p,q");
scanf("%d %d",&p,&q);
for(i=1;i<=n;i++)
{
if(i%p==0 && i%q!=0)
sum=sum+i;
}
printf("Sum of numbers%d  divisible by %d  [%d, %d]: %d\n", p, q, ll, ul, sum);

return 0;
}



