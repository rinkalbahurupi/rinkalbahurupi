//accpet the age gender ("m,f")and  the number of days and display the wages according if the age does not fall in any range then display the following massage "enter appropriote age
#include<stdio.h>
int main() {
int age, gender, day, w;
printf("Enter age, gender, and number of days: ");
scanf("%d %d %d", &age, &gender, &day);
if (age >= 18 && age < 30) {
if (gender == 'm') {
w = day * 700;
printf("Wages: %d\n", w);
} else if (gender == 'f') {
w = day * 500;
 printf("Wages: %d\n", w);
} else {
 printf("Invalid gender.\n");
}
} else {
printf("an appropriate age.\n");
}
return 0;
}

