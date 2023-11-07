#include<stdio.h>

int main()
{
    int month, day, year;
    printf("Enter the month, day, year: ");
    scanf("%d %d %d", &month, &day, &year);
    
    if(year > 0 && month > 0 && month <= 12 && day > 0 && day <= 31)
    {
        printf("Valid date");
    }
    else
    {
        printf("Invalid date");
    }
    
    return 0;
}

