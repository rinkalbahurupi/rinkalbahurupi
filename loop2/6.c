/*
5 5 5 5 5
5 5 5 5
5 5 5
5 5
5 
*/
#include<stdio.h>
int main()
{
int n,i=5,k=5,j;
printf("enter the number");
scanf("%d",&n);
for(i=n;0<i;i--)
{
for(j=1;j<i;j++)
{
printf("%d" ,k);
}
printf("\n");
}
return 0;
}
