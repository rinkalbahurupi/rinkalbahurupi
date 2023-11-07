//construct a flowchart to obtain the length (L) and breadth (B) of a rectangle and check whether its area is greater or perimeter is greater or both are equal
#include<stdio.h>
int main()
{
int l,b,p,a,c;
printf("enter length & breadth");
scanf("%d %d",&l,&b);
a=l*b;
p=2*(l+b);
if(a>p)
{
printf("%d\n",a);
}
else if(a<p)

{
printf("%d\n",p);
}
else
{
printf("both are equal");
}
return 0;
}


