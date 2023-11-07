//Write a Java program that reads a positive integer 'n', and calculates and prints its prime factorization.
#include<stdio.h>
int main()
{
int n,i,c;
scanf("%d",&n);
for(i=2; i<=n; i++)
{
if(n%i==0)
c=0;
{

for(int j=1; j<=i; j++)
{
if(i%j==0)
{
c=c+1;
}
if
(c==2)
{
printf("%d\n",i);
}
}

}
}
return 0;
}
