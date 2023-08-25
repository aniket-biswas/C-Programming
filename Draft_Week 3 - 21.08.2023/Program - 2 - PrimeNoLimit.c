#include <stdio.h>
#include <stdbool.h>

bool is_prime(int num) {
    if (num <= 1) {
        return false;
    }
    
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    
    return true;
}

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
        if (is_prime(current_num)) {
            printf("%d ", current_num);
        }
        current_num++;
    }
    printf("\n");

    return 0;
}


// Algorithm to Generate Prime Numbers Between Two Limits:

// 1. Start
// 2. Declare variables: lower_limit, upper_limit, current_num
// 3. Display "Enter the lower limit: "
// 4. Read lower_limit from the user
// 5. Display "Enter the upper limit: "
// 6. Read upper_limit from the user
// 7. If lower_limit < 2, then
//       Set lower_limit = 2
// 8. Set current_num = lower_limit
// 9. Display "Prime numbers between lower_limit and upper_limit:"
// 10. While current_num <= upper_limit, do the following:
//     a. Set is_prime = true
//     b. If current_num <= 1, then
//          Set is_prime = false
//     c. For i = 2 to the square root of current_num, do the following:
//          i. If current_num is divisible by i, then
//             Set is_prime = false
//             Break the loop
//     d. If is_prime is true, then
//          Display current_num followed by a space
//     e. Increment current_num by 1
// 11. End
