//Write a program to print the numbers below 100 that are divisible by 7.
  #include <stdio.h>

int main()
{
    printf("Numbers below 100 that are divisible by 7:\n");
    
    for (int i = 1; i <= 100; i++)
    {
        if (i % 7 == 0)
        {
            printf("%d\n", i);
        }
    }
    
    return 0;
}

