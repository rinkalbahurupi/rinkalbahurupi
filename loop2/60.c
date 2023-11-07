// given a number n and draw a flowchart that print the count of number from 1 o n that are not divisible by any of he following numbers (2,3,4,5,6,7,8,9,10)//

#include<stdio.h>

int main()
{
    int n, i, p = 0;
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        int j;
        int isDivisible = 0; 
        
        for (j = 2; j <= 10; j++) 
        {
            if (i % j == 0)
            {
                isDivisible = 1;
                break; 
            }
        }
        
        if (!isDivisible) 
        {
            p++;
        }
    }

    printf("Count: %d\n", p); 
    
    return 0;
}

