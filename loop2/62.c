//construct a flowchart to determine the maximum and the minimum of out of n given numbers.
	#include<stdio.h>

	int main() 
	{
    	int n, i, min, max, a;
    	scanf("%d", &n);
   	 scanf("%d", &a); 
   	 min = max = a;
    	for (i = 2; i <= n; i++) 
    	{ 
        scanf("%d", &a);
        if (a > max) 
        {
            max = a;
        }
        if (a < min) 
        {
        min = a;
        }
    	}
	printf("Min %d\nMax %d\n", min, max);
   	 return 0;
	}

