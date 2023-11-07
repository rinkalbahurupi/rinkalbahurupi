//accept any city from the user and display the monuments of that city.
#include<stdio.h>
int main()
{
int city,delhi,agra,jaipur;
printf("enter code for city 1 for delhi,2 for agra,3 for jaipur,city");
scanf("%d",&city);
if(city==1)
{
printf("red fort\n");
}
else if(city==2)
{
printf("taj mahal\n");
}
else if(city==3)
{
printf("jal mahal\n");
}
else
{
printf("none");
}
return 0;
}
