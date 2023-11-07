//constuct a flowchart to take selling price and cost price as input and calculate the profit percentage.
#include<stdio.h>
int main()
{
int cp,sp,p,r;
printf("enter the price,cp,sp");
scanf("%d %d",&cp,&sp);
if(sp>=cp)
{
printf("profit");
}
else if(sp==cp)
{
printf("no profit,no loss");
}
else {
p=sp-cp;
r=(p/cp)*100;
printf("%d\n",r);}
return 0;
}


