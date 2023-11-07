//"Write a program to accept the cost price of a bike and display the road tax to be paid according to the following criteria.
#include<stdio.h>
int main()
{
int cp;
printf("enter cp");
scanf("%d",&cp);
if(cp>100000)
{
printf("15 tax");
}
else if(cp>50000&cp<=100000)
{
printf("10 tax");
}
else if(cp<=50000)
{
printf("5 tax");
}
else
{
printf("invalid");
}
return 0;
}
     
