//construct a flowchart to calculate how many books we can buy we have X Rs. cost of book Rs.y.
#include<stdio.h>
int main()
{
int x,y,b;
printf("enter the total amount,x,y ");
scanf("%d %d",&x,&y);
b=x%y;
printf("%dbuy books",b);
return 0;
}



