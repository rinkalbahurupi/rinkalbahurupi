//calculate the bonus for the employee using company rule if the pay is more than or equal to 3000 bonus is fixed if pay is more than 1600 but less than 300 bonus is less than 250 it will allow but is 10% bonusis more than 250 it will allow only 250 rs if the pay is less than or equal to 1600 the bonus is 15%.
#include<stdio.h>
int main()
{
int pay,bonus;
printf("enter the pay scale");
scanf("%d",&pay);
if (pay>=3000)
{
bonus=300;
}
else if(pay>=1600 &&pay<=3000)
{
int b=0.10*pay;
if (bonus<250)
{
bonus=b;
}
else 
{
bonus=250;
}
}
else if (pay<=1600)
{
bonus=0.15*pay;
}printf("%d",bonus);
return 0;
}
