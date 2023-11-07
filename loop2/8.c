/*
5 5 5 5 5
4 4 4 4
3 3 3
2 2 
1
*/
#include<stdio.h>
int main()
{
int i,n,j;
printf ("enter the number");
scanf("%d",&n);
for(i=n;i>0;i--)
{
for(j=1;j<=i;j++)
{
printf("%d" ,i);
}
printf("\n");
}
return 0;
}
