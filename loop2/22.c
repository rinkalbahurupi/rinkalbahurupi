/*
1 2 3 4
2 2 3 4
3 3 3 4
4 4 4 4
*/
#include<stdio.h>
int main()
{
int n,i,j;
printf("enter the number");
scanf("%d",&n);
for(i=1; i<=n; i++)
{
for(j=1; j<=n; j++)
{
if(j<=i)
{
printf("%d ",i);
}
else if(j<=n+i)
{
printf("%d ",j);
}
}
printf("\n");
}
return 0;
}
