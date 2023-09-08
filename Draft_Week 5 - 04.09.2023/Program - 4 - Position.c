#include <stdio.h>

int main() {
    int n, target;

    // Prompt the user to enter the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

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

    // Prompt the user to enter the number to search and delete
    printf("Enter the number to search and delete: ");
    scanf("%d", &target);

    // Search for the target number in the array
    int found = 0; // Flag to indicate if the target number is found

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            found = 1; // Target number found
            // Delete the number by shifting elements
            for (int j = i; j < n - 1; j++) {
                arr[j] = arr[j + 1];
            }
            n--; // Decrease the size of the array
            break; // Exit the loop after deletion
        }
    }

    if (found) {
        printf("Number %d found and deleted.\n", target);
    } else {
        printf("Number %d not found in the array.\n", target);
    }

    // Display the updated array
    printf("Updated array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
