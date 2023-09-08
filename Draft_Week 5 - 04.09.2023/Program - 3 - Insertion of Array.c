#include <stdio.h>

int main() {
    int n, position, newValue;

    // Prompt the user to enter the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Check if the size is valid
    if (n <= 0) {
        printf("Invalid array size. Please enter a positive integer.\n");
        return 1;
    }

    int arr[100]; // Assuming a maximum array size of 100

    // Input elements into the array
    printf("Enter %d elements separated by spaces: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Prompt the user to enter the position where they want to insert the element
    printf("Enter the position (0 to %d) to insert the new element: ", n);
    scanf("%d", &position);

    // Check if the position is valid
    if (position < 0 || position > n) {
        printf("Invalid position. Please enter a position between 0 and %d.\n", n);
        return 1;
    }

    // Prompt the user to enter the new element to insert
    printf("Enter the new element to insert: ");
    scanf("%d", &newValue);

    // Shift elements to the right to make space for the new element
    for (int i = n; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element at the specified position
    arr[position] = newValue;

    // Increment the size of the array
    n++;

    // Display the updated array
    printf("Updated array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

// Algorithm:

// 1. Start
// 2. Declare integer variables n (size of the array), position (position to insert), and newValue (new element).
// 3. Prompt the user to enter the size of the array (n).
// 4. Read the value of n from the user.
// 5. Check if n is less than or equal to 0:
//    a. If true, print "Invalid array size. Please enter a positive integer."
//    b. Return 1 (indicating an error) and exit.
// 6. Declare an integer array arr with a maximum size (e.g., 100).
// 7. Prompt the user to enter n elements separated by spaces and store them in the arr array.
// 8. Prompt the user to enter the position where they want to insert the new element (position).
// 9. Check if the position is valid (0 to n):
//    a. If not valid, print "Invalid position. Please enter a position between 0 and n."
//    b. Return 1 (indicating an error) and exit.
// 10. Prompt the user to enter the new element to insert (newValue).
// 11. Shift elements to the right starting from the end of the array to create space for the new element.
// 12. Insert the new element at the specified position in the arr array.
// 13. Increment the size of the array (n).
// 14. Print "Updated array:".
// 15. Display the updated arr array.
// 16. End.
