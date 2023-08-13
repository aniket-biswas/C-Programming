#include <stdio.h>

int main() {
    int days, years, weeks, remainingDays;

    // Input the number of days
    printf("Enter the number of days: ");
    scanf("%d", &days);

    // Conversion calculations
    years = days / 365;
    weeks = (days % 365) / 7;
    remainingDays = days - (years * 365 + weeks * 7);

    // Display the result
    printf("%d days is equivalent to:\n", days);
    printf("Years: %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d\n", remainingDays);

    return 0;
}
