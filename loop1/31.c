//"Can you find all the three-digit numbers that have a special property? The property is that the sum of the factorials of its individual digits is equal to the number itself. For example, the number 145 has this property because 1! + 4! + 5! = 1 + 24 + 120 = 145.Can you write a program to determine all three-digit numbers that satisfy this property?"
#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);

   int r;
   int m=n;
   int sum=0;
   while(n>0)
   {
   r=n%10;
   int j=1;
   int fac=1;
   while(j<=r)
   {
   fac=fac*j;
   j=j+1;}
   sum=sum+fac;
   n=n/10;
   }if(sum==m)
   {
   printf("%d",m);
   }
   else{
   printf("invalid");
   }
   return 0;
   }
