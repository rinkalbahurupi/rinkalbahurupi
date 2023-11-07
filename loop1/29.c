//Write a program to print multiplication tables from 1 to 5.
#include<stdio.h>
int main()
{
int i,j;
for(i=1;i<=10;i++){
printf("\n multiplication table of %d----\n\n",i);
for(j=1;j<=10;j++){
printf("\n%d*%d = %d",i,j,i*j);
}
printf("\n\n--------------\n\n");
}
return 0;
}
