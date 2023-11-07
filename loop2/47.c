//write a program to print the factorial of a no accepted by the user.//
#include<stdio.h>
int main()
{
int i,n;
printf("enter the num");
scanf("%d",&n);
int p=1;
for(i=n; i>=1; i--)
{
p= p*i;}
printf("%d",p);

return 0;
}
