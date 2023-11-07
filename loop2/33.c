/*
      1
      2 3
      4 5 6
      7 8 9 10
     
      
   */
   #include<stdio.h>
   int main ()
   {
   int i,j,n,k=n;
   printf("enter the num");
   scanf("%d",&n);
   for(i=1;i<=n; i++)
   {
for(j=1;j<=i;j++)
{
k=k+1;
printf("%d ",k);
}
printf("\n");
}
return 0;
}

  
