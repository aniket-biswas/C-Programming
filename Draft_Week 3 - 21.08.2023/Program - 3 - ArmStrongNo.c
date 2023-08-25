#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, result = 0, n = 0;

    // Read the number from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num; // Store the original number for comparison

    // Count the number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        n++;
    }

    originalNum = num; // Reset originalNum for further calculations

    // Calculate the sum of cubes of digits
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    // Check if it's an Armstrong Number
    if (result == num) {
        printf("%d is an Armstrong Number.\n", num);
    } else {
        printf("%d is not an Armstrong Number.\n", num);
    }

    return 0;
}


// Algorithm to Check Armstrong Number:

// 1. Start
// 2. Declare variables: num, originalNum, remainder, result = 0, n = 0
// 3. Display "Enter an integer: "
// 4. Read num from the user
// 5. Set originalNum = num
// 6. While originalNum is not equal to 0, do the following:
//    a. Increment n by 1
//    b. Set originalNum = originalNum / 10
// 7. Set originalNum = num
// 8. While originalNum is not equal to 0, do the following:
//    a. Calculate remainder = originalNum % 10
//    b. Calculate result = result + remainder ^ n
//    c. Set originalNum = originalNum / 10
// 9. If result is equal to num, then
//       Display num + " is an Armstrong Number."
//    Else
//       Display num + " is not an Armstrong Number."
// 10. End
