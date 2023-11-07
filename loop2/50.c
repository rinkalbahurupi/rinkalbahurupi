// a group of students has 20 chocolate bags & 10 candy bags they want to know how much money they can RAISE IF HEY SELL ALL POSSIBLE CHOCLAE BAGS COMBINATION DRAW FLOWCHART TO CALCULATE THE TOTAL  REVENUE FROM ALL POSSIBLE SALES THE TOTAL RENUEVE FROM THE ALL POSSIBLE SALES.//
#include<stdio.h>

int main() {
int ca, cb, i, a, b, c;
printf("Enter the price of (ca) (cb): ");
scanf("%d %d", &ca, &cb);
c = 0;
for (i = 1; i <= 20; i++) {
a = ca * i;  cb;
for (int j = 1; j <= 10; j++) {
b = cb * j; 
c = c + a + b; 
}
}
printf("Total revenue from all possible sales: %d\n", c);
return 0;
}

