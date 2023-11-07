//construct a flowchart to calculate profit of loss print the value of profit incurred loss incured or no profit no loss.
#include<stdio.h>
int main()
{
int sp,cp,p,l;
printf("enter the value sp,cp");
scanf("%d %d",&sp,&cp);
if(sp==cp)
{
printf("no loss no profit");
}
else if(sp>=cp)
{
p=sp-cp;
printf("profit");
}
else
l=cp-sp;
{
printf("loss");
}
return 0;
}


