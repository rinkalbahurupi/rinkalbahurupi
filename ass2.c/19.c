//construct a flowchart to check whether number is negative positive or zero.
#include<stdio.h>
int main()
{
int num;
printf("enter the number,num");
scanf("%d",&num);
if(num>=0)
{
printf("positive number");
}
else if(num<=0)
{
printf("negative number");
}
else if(num==0)
{
printf("print zero");
}
else
{
printf("print imagenery number");
}
return 0;
}

