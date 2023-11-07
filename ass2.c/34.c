//construct a flowchart to input marks of five subjects physics,chemistry,biology ,mathematics and computer calculate percentage and grade according to following.
#include<stdio.h>
int main()
{
int p,c,b,m,e,r,s,a;
printf("enter subject marks,p,c,b,m,e");
scanf("%d %d %d %d %d",&p,&c,&b,&m,&e);
s=p+c+b+m+e;
a=s*100/500;
if(a>=90)
{
printf("grade a");
}
else if(a>=80)
{
printf("grade b");
}
else if(a>70)
{
printf("grade c");
}
else if(a>=60)
{
printf("grade d");
}
else if(a>=50)
{
printf("grade e");
}
else if(a<=40)
{
printf("grade f");
}
else
{
printf("fail");
}
return 0;
}
