//construct a  flowchart to show how to interchange the valuesof two vairiable
#include<stdio.h>
int main()
{
int a,b;
printf("enter the number a,b");
scanf("%d %d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("%d %d\n",a,b);
return 0;
}
