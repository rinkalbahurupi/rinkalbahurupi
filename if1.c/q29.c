//construct a flowchart to calculate the percentage obtained in the above question
#include<stdio.h>
int main()
{
int h,m,e,s,c,p,sum;
printf("enter total marks h,m,e,s,c,");
scanf("%d %d %d %d %d",&h,&m,&e,&s,&c);
sum=h+m+e+s+c;
p=(sum*100/500);
printf("%d\n",p);
return 0;
}



