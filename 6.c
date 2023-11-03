//print the no from 20 to 54
#include<stdio.h>
int main()
{
 	int n;
 	printf("enter the n:");
 	scanf("%d",&n);
 	int arr[n];
 	for(int i=0; i<n; i++)
 	{
 	printf("enter the number:\n");
 	scanf("%d",&arr[i]);
 	
 	}
 	for(int i=0; i<n; i++)
 	{
 	printf("%d ",arr[i]);
 	}
 	return 0;		
}
