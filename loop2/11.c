/*
5 4 3 2 1
4 3 2 1
3 2 1
2 1
1
*/
#include<stdio.h>
int main()
{
int n,i,j;
printf("enter the number");
scanf("%d",&n);
int k=n;
for(i=n;i>=1;i--)
{
int m=k;
for(j=1;j<=i;j++)
{
printf("%d ",m);
m-=1;
}
k=k-1;
printf("\n");
}
return 0;
}
