//Write a C program that reads an integer and determines whether it's a palindrome or not. A palindrome is a number that reads the same forwards and backwards.
#include <stdio.h>
int main()
{
int  n; 
    int o = n;
    int r = 0;
    
    while (n > 0) {
        int digit = n % 10;
        r = r * 10 + d;
        n /= 10;
    }
     o == r;
}

int main() {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n) {
        printf("%d is a palindrome.\n", n);
    } else {
        printf("%d is not a palindrome.\n", n);
    }

    return 0;
}

