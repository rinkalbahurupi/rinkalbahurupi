//construct a flowchart to calculate the lateral surface area and total surface area of a cube 
#include<stdio.h>
#include<math.h>
int main()
{
int a,b,lsa,tsa;
printf("enter the number a,b");
scanf("%d %d",&a,&b);
lsa=4*a*2;
tsa=6*a*2;
printf("%d %d",lsa,tsa);
return 0;
}

