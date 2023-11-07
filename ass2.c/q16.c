//construct a flowchart to input the marks of two student in 5 student and check who is the topper 
#include<stdio.h>
int main()
{
int m,e,c,s,g,p1,p2,t1,t2,s1,s2;
printf("enter student marks m,e,c,s,g");
scanf("%d %d %d %d %d",&m,&e,&c,&s,&g);
t1=m+e+c+s+g;
t2=m+e+c+s+g;
p1=(t1/500)*100;
p2=(t2/500)*100;
if(s1>s2)
{
printf("s1 is topper");
}
else
{
printf("s2is topper");
}
return 0;
}
