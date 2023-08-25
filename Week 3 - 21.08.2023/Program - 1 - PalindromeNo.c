#include <stdio.h>

int main() {
    int num, originalNum, reversedNum = 0, remainder;

    // Read the number from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num; // Store the original number for comparison

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    printf("Reversed Number:%d\n", reversedNum);
    // Check if the original number is equal to the reversed number
    if (originalNum == reversedNum) {
        printf("%d is a palindrome.\n", originalNum);
    } else {
        printf("%d is not a palindrome.\n", reversedNum);
    }

    return 0;
}


// Algorithm to Check Palindrome Number:

// 1. Start
// 2. Declare variables: num, originalNum, reversedNum = 0, remainder
// 3. Display "Enter an integer: "
// 4. Read num from the user
// 5. Set originalNum = num
// 6. Set reversedNum = 0
// 7. While num is not equal to 0, do the following:
//    a. Calculate remainder = num % 10
//    b. Calculate reversedNum = reversedNum * 10 + remainder
//    c. Update num = num / 10
// 8. If originalNum is equal to reversedNum, then
//       Display originalNum + " is a palindrome."
//    Else
//       Display originalNum + " is not a palindrome."
// 9. End
