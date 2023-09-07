#include <stdio.h>

int main() {
    int num, sum = 0;

    // Prompt the user to enter a number
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    // Find and sum the divisors of the number
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    // Check if the number is perfect
    if (sum == num) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }

    return 0;
}



// Algorithm:
// 1. Start
// 2. Declare variable: num, sum
// 3. Display "Enter a number: "
// 4. Read num from the user
// 5. Initialize sum to 0
// 6. For i = 1 to num / 2, do the following:
//      a. If num is divisible by i, then
//           Add i to sum
// 7. If sum is equal to num, then
//      Display "num is a perfect number."
//    Else,
//      Display "num is not a perfect number."
// 8. End

// Prints the Steps
// #include <stdio.h>

// int main() {
//     int num, sum = 0;

//     // Prompt the user to enter a number
//     printf("Enter a positive integer: ");
//     scanf("%d", &num);

//     if (num <= 0) {
//         printf("Invalid input. Please enter a positive integer.\n");
//         return 1;
//     }

//     printf("Divisors of %d: 1", num);

//     // Find and sum the divisors of the number
//     for (int i = 2; i <= num / 2; i++) {
//         if (num % i == 0) {
//             sum += i;
//             printf(" + %d", i);
//         }
//     }

//     // Check if the number is perfect
//     if (sum == num) {
//         printf(" = %d\n", sum);
//         printf("%d is a perfect number.\n", num);
//     } else {
//         printf(" = %d\n", sum);
//         printf("%d is not a perfect number.\n", num);
//     }

//     return 0;
// }