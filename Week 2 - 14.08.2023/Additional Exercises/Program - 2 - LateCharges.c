#include <stdio.h>

int main() {
    int daysLate;
    float fine = 0.0;

    printf("Enter the number of days a member is late to return the book: ");
    scanf("%d", &daysLate);

    if (daysLate >= 1 && daysLate <= 5) {
        fine = 0.50;
    } else if (daysLate >= 6 && daysLate <= 10) {
        fine = 1.00;
    } else if (daysLate > 10 && daysLate <= 30) {
        fine = 5.00;
    } else if (daysLate > 30) {
        fine = 10.00;
    }

    if (fine > 0) {
        printf("The fine is Rs. %.2f\n", fine);
    } else {
        printf("No fine.\n");
    }

    return 0;
}

// Algorithm: Calculate Fine for Late Book Return

// 1. Start
// 2. Declare integer variable: daysLate
// 3. Declare float variable: fine
// 4. Display "Enter the number of days a member is late to return the book:"
// 5. Read an integer value from the user and store it in variable 'daysLate'
// 6. If 'daysLate' is between 1 and 5 (inclusive), then
//      6.1 Set 'fine' to Rs. 0.50
//    Else if 'daysLate' is between 6 and 10 (inclusive), then
//      6.2 Set 'fine' to Rs. 1.00
//    Else if 'daysLate' is greater than 10 and less than or equal to 30, then
//      6.3 Set 'fine' to Rs. 5.00
//    Else if 'daysLate' is greater than 30, then
//      6.4 Set 'fine' to Rs. 10.00
// 7. If 'fine' is greater than 0, then
//      7.1 Display "The fine is Rs. [fine]"
//    Else
//      7.2 Display "No fine."
// 8. End
