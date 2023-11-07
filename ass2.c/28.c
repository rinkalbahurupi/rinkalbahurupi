//construct a flowchart to take a two number as input and print their differnce if the first number is greater than the second number otherwise print the sum.
#include<stdio.h>
int main()
{
int a,b,c,d;
printf("enter the number");
scanf("%d %d",&a,&b);
if(a>b)
{
c=a-b;
printf("%d",c);
}
else
{
d=a+b;
printf("%d",d);
}
return 0;
}
