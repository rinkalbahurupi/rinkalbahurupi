# include<stdio.h>
int main()
{
int s,e;
printf("enter the starting number and ending number to find a palimdrom no\n");
scanf("%d %d",&s,&e);
for(int i=s; i<=e; i++)
{
int rev=0;
int n=i;
while(n>0)
{
rev=(rev*10)+(n%10);
n=n/10;
}
if(rev==i) printf("%d,%d),",i,rev);
}
printf("\n");
return 0;
}

