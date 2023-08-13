#include <stdio.h>

int main() {
    int seconds, hours, minutes, remainingSeconds;

    // Input the time in seconds
    printf("Enter the time in seconds: ");
    scanf("%d", &seconds);

    // Conversion calculations
    hours = seconds / 3600;
    minutes = (seconds % 3600) / 60;
    remainingSeconds = seconds % 60;

    // Display the result
    printf("%d seconds is equivalent to:\n", seconds);
    printf("Hours: %d\n", hours);
    printf("Minutes: %d\n", minutes);
    printf("Seconds: %d\n", remainingSeconds);

    return 0;
}
