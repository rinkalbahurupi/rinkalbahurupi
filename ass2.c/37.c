// Roller Coasters require children to have a minimum height of 5 feet. Any child below this height is generally not allowed on them. Write a program to accept a child’s height in inches and display if he or she will be allowed to ride or not.
#include<stdio.h>
int main()
{
int ch;
printf("enter the ch");
scanf("%d",&ch);
if(ch>=5)
{
printf("allowed to ride");
}
else
{
printf("not allowed to ride");
}
return 0;
}
