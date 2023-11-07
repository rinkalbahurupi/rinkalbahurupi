//write a program to take two number a and b as input from the user and print the number closeet to (but less than)a whichis completly divisible by b.
#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the number,a,b");
scanf("%d %d",&a,&b);
c=a/b;
printf("%d\n",c);
return 0;
}
