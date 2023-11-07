//construct a flowchart to check whether a number is divisible by 7 or not 
#include<stdio.h>
int main()
{
int num;
printf("enter the number,num");
scanf("%d",&num);
if(7%num)
{
printf("its divisible by 7");
}
else
{
printf("its not divisible 7");
}
return 0;
}
