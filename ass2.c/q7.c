//constuct a flowchart to  take selling price and cist price as input and calculate the loss
#include<stdio.h>
int main()
{
int cp,sp,l;
printf("enter the price cp,sp");
scanf("%d %d",&cp,&sp);
if(cp>=sp)
{
printf("loss");
}
else if(cp==sp)
{
printf("no loss,no profit");
}
else{
l=cp-sp;
printf("%d\n",l);
}
return 0;
}

