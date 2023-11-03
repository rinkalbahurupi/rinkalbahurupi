// make a flowchart to print the sum and averange of elements in an array take a elements aas input from the users.
#include <stdio.h>
	int main() {
        int n, s = 0, c = 0;
    
    	printf("Enter the number of elements: ");
    	scanf("%d", &n);
    
    	int arr[n];
    
    	for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
        
        s = s + arr[i]; 
        c = c + 1;      
    	}
    
    	float avg = (float)s / c;
    
   	 printf("Sum: %d\n", s);
    	 printf("Average: %.2f\n", avg);
    
    	return 0;
	}

