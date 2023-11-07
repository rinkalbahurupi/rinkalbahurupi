//construct a flowchart to input basic salary of an employee and calculate its gross salary according to following.
#include<stdio.h>
int main()
{
int bs,hra,gs,da;
printf("enter the,bs");
scanf("%d",&bs);
if(bs<=10000){
hra=20/100;
da=80/100;
gs=bs+bs*hra+bs*da;

printf("%d",gs);
}
else if(bs<=20000){
hra=25/100;
da=90/100;
gs=bs+bs*hra+bs+da;

printf("%d",gs);
}
else if(bs>=20000){
hra=32/100;
da=95/100;
gs=bs+bs*hra+bs+da;
printf("%d",gs);
}
else 
{
printf("invallid");
}
return 0;
}
