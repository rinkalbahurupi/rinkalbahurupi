// if a array contains n elements the check if the given array is a pallindrome or not.
    #include<stdio.h>
    int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
    printf("Enter element");
    scanf("%d", &arr[i]);
    }
    int p = 1;
    for (int i = 0, j = n - 1; i < j; i++, j--) {
    
    if (arr[i] != arr[j]) {
    p = 0;
    }
    
    }
    if (p) 
    {
    printf("The array is a palindrome.\n");
    } else
     {
    printf("The array is not a palindrome.\n");
    }
    return 0;
    }
    
