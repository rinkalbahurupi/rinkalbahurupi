//if the number and the reversw are also display twisted prime otherwise not a twisted prime //
#include<stdio.h>

int is_prime(int num) {
if (num <= 1) {
return 0; 
}
for (int i = 2; i * i <= num; i++) {
if (num % i == 0) {
return 0; 
}
}
return 1; 
}
int reverse_number(int num) {
int reversed = 0;
while (num > 0) {
reversed = reversed * 10 + num % 10;
num /= 10;
}
return reversed;
}
int main() {
int n;
printf("Enter the number: ");
scanf("%d", &n);
int rev_n = reverse_number(n);
if (is_prime(n) && is_prime(rev_n)) {
printf("Twisted Prime\n");
    }
 else 
 {
printf("Not a Twisted Prime\n");
}
return 0;
}

