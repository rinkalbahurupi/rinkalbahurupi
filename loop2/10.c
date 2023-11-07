/*
1
2 1
3 2 1
4 3 2 1
5 4 3 2 1
*/
#include<stdio.h>
int main ()
{
int i,n,j;
printf("enter the number");
scanf("%d",&n);
for(i=1;i<n;i++)
{
for(j=i;j>0;j--)
{
printf("%d ",j);
}
printf("\n");
}
return 0;
}
