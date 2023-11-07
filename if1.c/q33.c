//construct a flowchart to obtain the fahrenheit equivalent of a  temperature given in celcius where the reletionship between two scales of temprature is c/5=(f-32)/9
//where, c= temprature in celcius.
//f= temprature in fahrenheit.
#include<stdio.h>
int main()
{
int c,f;
printf("enter the number,c");
scanf("%d",&c);
f=(c*9)/5;
printf("%d\n",f);
return 0;
}
