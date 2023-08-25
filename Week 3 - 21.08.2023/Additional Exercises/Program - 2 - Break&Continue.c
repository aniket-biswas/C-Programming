#include <stdio.h>

int main() {
    // Demonstrate break and continue in while loop
    printf("Demonstrating break and continue in while loop:\n");
    int i = 1;
    while (i <= 5) {
        if (i == 3) {
            printf("Encountered 3. Exiting loop.\n");
            break; // Exit the loop when i equals 3
        }
        printf("Current value of i: %d\n", i);
        i++;
    }
    printf("\n");

    // Demonstrate break and continue in do-while loop
    printf("Demonstrating break and continue in do-while loop:\n");
    int j = 1;
    do {
        if (j == 2) {
            printf("Skipping 2.\n");
            j++;
            continue; // Skip the rest of the loop body and continue with the next iteration
        }
        if (j == 5) {
            printf("Encountered 5. Exiting loop.\n");
            break; // Exit the loop when j equals 5
        }
        printf("Current value of j: %d\n", j);
        j++;
    } while (j <= 5);

    return 0;
}


// Algorithm to Demonstrate Break and Continue Statements:

// 1. Start
// 2. Display "Demonstrating break and continue in while loop:"
// 3. Initialize i = 1
// 4. While i is less than or equal to 5, do the following:
//    a. If i is equal to 3, then
//         Display "Encountered 3. Exiting loop."
//         Exit the loop using the break statement
//    b. Display "Current value of i: " + i
//    c. Increment i by 1
// 5. Display a blank line

// 6. Display "Demonstrating break and continue in do-while loop:"
// 7. Initialize j = 1
// 8. Do the following:
//    a. If j is equal to 2, then
//         Display "Skipping 2."
//         Increment j by 1
//         Skip the rest of the loop body using the continue statement
//    b. If j is equal to 5, then
//         Display "Encountered 5. Exiting loop."
//         Exit the loop using the break statement
//    c. Display "Current value of j: " + j
//    d. Increment j by 1
//    e. While j is less than or equal to 5
// 9. End
