//construct a flowchart to calculate the selling price of a product if MRP and discount are given .
#include<stdio.h>
int main()
{
int MRP,discount,s;
printf("enter the selling price of a product,MRP,discount");
scanf("%d %d",&MRP,&discount);
s=MRP-discount;
printf("%d\n",s);
return 0;
}
