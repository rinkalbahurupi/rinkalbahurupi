/*
1
3 3
5 5 5
7 7 7 7
9 9 9 9 9 */
#include<stdio.h>
int main()
{
int i,a=1,j,n;
printf("enter the number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
printf("%d " ,a);
}
a=a+2;
printf("\n");
}
return 0;
}
