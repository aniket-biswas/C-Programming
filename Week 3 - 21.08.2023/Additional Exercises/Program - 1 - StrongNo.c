#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num, originalNum, digit, sum = 0;

    // Read the number from the user
    printf("Enter a positive number: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Invalid input. Please enter a positive number.\n");
        return 1;
    }

    originalNum = num; // Store the original number for comparison

    // Calculate the sum of factorials of digits
    while (num > 0) {
        digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }

    // Check if it's a strong number
    if (sum == originalNum) {
        printf("%d is a strong number.\n", originalNum);
    } else {
        printf("%d is not a strong number.\n", originalNum);
    }

    return 0;
}


// Algorithm to Check Strong Number:

// 1. Start
// 2. Declare variables: num, originalNum, digit, sum = 0
// 3. Display "Enter a positive number: "
// 4. Read num from the user
// 5. If num <= 0, then
//       Display "Invalid input. Please enter a positive number."
//       Exit
// 6. Set originalNum = num
// 7. While num > 0, do the following:
//    a. Calculate digit = num % 10
//    b. Calculate sum = sum + factorial(digit), where factorial function calculates the factorial of a number
//    c. Update num = num / 10
// 8. If sum is equal to originalNum, then
//       Display originalNum + " is a strong number."
//    Else
//       Display originalNum + " is not a strong number."
// 9. End
