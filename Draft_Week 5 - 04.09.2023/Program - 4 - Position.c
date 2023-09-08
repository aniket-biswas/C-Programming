#include <stdio.h>

int main() {
    int n, searchValue;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements separated by spaces:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number you want to search and delete: ");
    scanf("%d", &searchValue);

    int found = 0; // To track if the number was found

    for (int i = 0; i < n; i++) {
        if (arr[i] == searchValue) {
            // Shift elements to the left to overwrite the found element
            for (int j = i; j < n - 1; j++) {
                arr[j] = arr[j + 1];
            }
            found = 1; // Set the flag to indicate the number was found
            n--; // Decrease the array size by 1
            i--; // Adjust the loop counter to recheck the current index
        }
    }

    if (found) {
        printf("Number %d found and deleted.\n", searchValue);
        printf("Updated array: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
    } else {
        printf("Number %d not found in the array.\n", searchValue);
    }

    return 0;
}
