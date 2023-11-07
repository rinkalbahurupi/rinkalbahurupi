//Write a program to find the sum of the squares of the first 9 natural numbers that are divisible by 3.
#include<stdio.h>
int main()
{
int p=1,i,n,sum=0;
printf("enter the number, n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(i%3==0)
{
p=i*i;
sum=sum+p;
}
}
printf("%d\n",sum);

return 0;
}

