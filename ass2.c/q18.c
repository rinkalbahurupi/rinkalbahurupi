//accept the temprature in degree celcius of water and check wherther it is boilling  or not 
#include<stdio.h>
int main()
{
int boillingtemprature;
printf("enter the temprature,boillingtempratature");
scanf("%d",&boillingtemprature);
if(boillingtemprature>100)
{
printf("bolling water");
}
else
{
printf("not boilling water");
}
return 0;
}
