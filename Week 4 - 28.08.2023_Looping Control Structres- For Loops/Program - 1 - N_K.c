#include <stdio.h>

int main() {
    int rows, columns;

    printf("Enter the number of rows: ");  // Ask user for the number of rows
    scanf("%d", &rows);  // Store the user's input in the 'rows' variable

    printf("Enter the number of columns: ");  // Ask user for the number of columns
    scanf("%d", &columns);  // Store the user's input in the 'columns' variable

    printf("\nMultiplication Table:\n");

    // Print column headers
    printf("   |");  // Print an empty space for the corner
    for (int i = 1; i <= columns; i++) {
        printf("%4d", i);  // Print column numbers nicely spaced
    }
    printf("\n");

    // Print separator
    printf("----");  // Print a separator line
    for (int i = 1; i <= columns; i++) {
        printf("----");  // Print separator dashes for each column
    }
    printf("\n");

    // Generate multiplication table
    for (int i = 1; i <= rows; i++) {
        printf("%2d |", i);  // Print the row number
        for (int j = 1; j <= columns; j++) {
            printf("%4d", i * j);  // Print the multiplication result nicely spaced
        }
        printf("\n");  // Move to the next line for the next row
    }

    return 0;  // Indicate successful program execution
}

// Algorithm:
// 1. Start
// 2. Declare variables: rows, columns
// 3. Display "Enter the number of rows: "
// 4. Read rows from the user
// 5. Display "Enter the number of columns: "
// 6. Read columns from the user
// 7. Display "Multiplication Table:"
// 8. Display "   |" // Print an empty space for the corner
// 9. For i = 1 to columns, do the following:
//      a. Display i with 4 spaces // Print column numbers nicely spaced
// 10. Display a new line
// 11. Display "----" // Print a separator line
// 12. For i = 1 to columns, do the following:
//      a. Display "----" // Print separator dashes for each column
// 13. Display a new line
// 14. For i = 1 to rows, do the following:
//      a. Display i with 2 spaces and "|"
//      b. For j = 1 to columns, do the following:
//           i. Display i * j with 4 spaces // Print the multiplication result nicely spaced
//      c. Display a new line // Move to the next line for the next row
// 15. End
