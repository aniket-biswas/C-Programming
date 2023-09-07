#include <stdio.h>

int main() {
    // Demonstrate break and continue in for loop
    printf("\nDemonstrating break and continue in for loop:\n-----------------------------------\n");
    
    // Using break in a for loop
    printf("Using break:\n");
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            printf("Encountered 3. \nExiting loop.\n-------------------------\n");
            break; // Exit the loop when i equals 3
        }
        printf("Current value of i: %d\n", i);
    }
    
    // Using continue in a for loop
    printf("Using continue:\n");
    for (int j = 1; j <= 5; j++) {
        if (j == 2) {
            printf("Skipping 2.\n");
            continue; // Skip the rest of the loop body and continue with the next iteration
        }
        if (j == 4) {
            printf("Encountered 4. \nExiting loop.\n\n");
            break; // Exit the loop when j equals 4
        }
        printf("Current value of j: %d\n", j);
    }

    return 0;
}


// Algorithm to Demonstrate Break and Continue Statements in For Loop:

// 1. Start
// 2. Display "Demonstrating break and continue in for loop:"
// 3. Display "Using break:"
// 4. For i = 1 to 5, do the following:
//    a. If i is equal to 3, then
//         Display "Encountered 3. Exiting loop."
//         Exit the loop using the break statement
//    b. Display "Current value of i: " + i
// 5. Display a blank line

// 6. Display "Using continue:"
// 7. For j = 1 to 5, do the following:
//    a. If j is equal to 2, then
//         Display "Skipping 2."
//         Skip the rest of the loop body using the continue statement
//    b. If j is equal to 4, then
//         Display "Encountered 4. Exiting loop."
//         Exit the loop using the break statement
//    c. Display "Current value of j: " + j
// 8. End
