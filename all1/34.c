//in a certain city the maximum and the minimum temrature on each day are recorded each month to determine the following at the end of the month.1) mean maximum temprature.2)heighest maximum temrature.3) lowest minimum temrature.4) hottest day number of the mmonth 5) coldest day number of the number.


#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of days: ");
    scanf("%d", &n);

    int maxTemp, minTemp;
    int highestMaxTemp = -1000, lowestMinTemp = 1000;
    int hottestDay, coldestDay;

    for (int day = 1; day <= n; day++) {
        printf("Day %d\n", day);
        
        printf("Enter maximum temperature: ");
        scanf("%d", &maxTemp);
        if (maxTemp > highestMaxTemp) {
            highestMaxTemp = maxTemp;
            hottestDay = day;
        }
        
        printf("Enter minimum temperature: ");
        scanf("%d", &minTemp);
        if (minTemp < lowestMinTemp) {
            lowestMinTemp = minTemp;
            coldestDay = day;
        }
    }

    printf("Hottest day: Day %d\n", hottestDay);
    printf("Coldest day: Day %d\n", coldestDay);

    return 0;
}

