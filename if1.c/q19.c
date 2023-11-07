//costruct a flowchart to find the lateral surface area and total surface area of a cuboid .
#include<stdio.h>
int main()
{
int l,b,h;
int lsa,tsa;
printf("ener the number l,b,h");
scanf("%d %d %d",&l,&b,&h);
//calculating the lateral surface area
lsa=2*(l+b)*h;
//calculating total surface area
tsa=2*((l*b)+(b*h)+(h*l));
printf("lateral surface area: %d\n",lsa);
printf("total surface area: %d\n",tsa);
return 0;
}




