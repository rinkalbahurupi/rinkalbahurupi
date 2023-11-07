//a certain steel is graded according to the following.
//1) rockwell hardness >50
//carbon content>0.7
//tensfie strenth>5600 kg/cm^2
#include<stdio.h>
int main()
{
int rc,cc,ts;
printf("enter the grade,rc,cc,ts");
scanf("%d %d %d",&rc,&cc,&ts);
if(rc>50 && cc>0.7 && ts>5600)
{
printf("grade 10");
}
else if(rc>50 && cc>0.7 && ts<5600)
{
printf("grade 9");
}
else if(rc<50 && cc>0.7 && ts>5600)
{
printf("grade 8");
}
else if(rc>50 && cc<0.7 && ts>5600)
{
printf("grade 7");
}
else
{
printf("grade 0");
}
return 0;
}
