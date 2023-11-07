//construct a flowchart to find a minumum between three number.
#include<stdio.h>
int main()
{
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
if(a>b && a>c)
{
printf("a is grater:%d",a);
}
else if(b>a && b>c)
{
printf("b is graater:%d",b);
}
else if(c>a && c>b)
{
printf("c is grater:%d",c);
}
return 0;
}
