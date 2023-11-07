/*
577
530 485
442 401 362
325 290 257 226
197 170 145 122 101
*/
#include<stdio.h>
int main()
{
int n,a,i,p=47;
scanf("%d %d",&n,&a);
for(i=1; i<=n; i++)
{
int j;
for(j=1; j<=i; j++)
{
printf("%d ",a);
a=a-p;
p=p-2;
}
printf("\n");
}
return 0;
}
