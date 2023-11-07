//"Write a program to show how to find all the perfect numbers under 10,000.
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
