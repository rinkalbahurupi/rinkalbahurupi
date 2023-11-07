#include<stdio>
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
int x,y;
scanf("%d %d",&x,&y);
if (x<100)
{ 
int k=x/y;
printf("%d\n",k);
}
else if(x>=100){
int k= x-20;
int a= k/y;
printf("%d\n",a);
}
}
return 0; 
}
