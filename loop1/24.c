//"Write a program to show how the factors of a given number can be obtained. A factor is a number that can divide another number evenly without
 #include<stdio.h>
 int main()
 {
 int n,i;
 printf("enter the number,n");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 if(n%i==0)
 {
 printf("%d\n",i);
 }
 return 0;
 }
