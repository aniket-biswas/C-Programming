#include <stdio.h>

int main() {
    int n, pos, newValue;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements separated by spaces:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position where you want to insert the element (0 to %d): ", n);
    scanf("%d", &pos);

    if (pos < 0 || pos > n) {
        printf("Invalid position. Position should be between 0 and %d.\n", n);
    } else {
        printf("Enter the new element to insert: ");
        scanf("%d", &newValue);

        // Shift elements to make space for the new element
        for (int i = n - 1; i >= pos; i--) {
            arr[i + 1] = arr[i];
        }

        // Insert the new element at the specified position
        arr[pos] = newValue;
        n++; // Increase the array size by 1

        printf("Element inserted successfully.\n");

        printf("Updated array: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
    }

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
