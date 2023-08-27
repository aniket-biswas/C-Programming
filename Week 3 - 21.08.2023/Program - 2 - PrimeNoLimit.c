#include <stdio.h>

int main() {
    int lower_limit, upper_limit;

    // Read the lower and upper limits from the user
    printf("Enter the lower limit: ");
    scanf("%d", &lower_limit);

    printf("Enter the upper limit: ");
    scanf("%d", &upper_limit);

    // Validate and adjust limits
    if (lower_limit < 2) {
        lower_limit = 2;
    }

    // Generate prime numbers using a while loop
    int current_num = lower_limit;
    printf("Prime numbers between %d and %d:\n", lower_limit, upper_limit);
    while (current_num <= upper_limit) {
        int is_prime = 1; // Assume the number is prime initially
        if (current_num <= 1) {
            is_prime = 0; // Numbers less than or equal to 1 are not prime
        } else {
            for (int i = 2; i * i <= current_num; i++) {
                if (current_num % i == 0) {
                    is_prime = 0; // Number is not prime
                    break;
                }
            }
        }
        
        if (is_prime) {
            printf("%d ", current_num);
        }
        
        current_num++;
    }
    printf("\n");

    return 0;
}


// Algorithm:

// 1. Start
// 2. Declare variables: lower_limit, upper_limit, current_num
// 3. Display "Enter the lower limit: "
// 4. Read lower_limit from the user
// 5. Display "Enter the upper limit: "
// 6. Read upper_limit from the user
// 7. If lower_limit < 2, then
//      Set lower_limit = 2
// 8. Set current_num = lower_limit
// 9. Display "Prime numbers between lower_limit and upper_limit:"
// 10. While current_num <= upper_limit, do the following:
//      a. Set is_prime = 1 // Assume current_num is prime
//      b. If current_num <= 1, then
//           Set is_prime = 0 // Numbers <= 1 are not prime
//      c. For i = 2 to the square root of current_num, do the following:
//           i. If current_num is divisible by i, then
//                Set is_prime = 0 // Number is not prime
//                Break the loop
//      d. If is_prime is true, then
//           Display current_num followed by a space
//      e. Increment current_num by 1
// 11. End
