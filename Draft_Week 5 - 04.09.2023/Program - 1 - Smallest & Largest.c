#include <stdio.h>

int main() {
    int n;
    
    // Prompt the user to enter the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Check if the size is valid
    if (n <= 0) {
        printf("Invalid array size. Please enter a positive integer.\n");
        return 1;
    }

    int arr[n];

    // Input elements into the array using unique keywords
    printf("Enter %d elements separated by spaces: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize variables to store the largest and smallest elements
    int largest = arr[0];
    int smallest = arr[0];

    // Find the largest and smallest elements in the array
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    // Display the largest and smallest elements
    printf("Largest element: %d\n", largest);
    printf("Smallest element: %d\n", smallest);

    return 0;
}

// Algorithm:

// 1. Start
// 2. Declare an integer variable n to store the size of the array.
// 3. Prompt the user to enter the size of the array.
// 4. Read the value of n from the user.
// 5. Check if n is less than or equal to 0:
//    a. If true, print "Invalid array size. Please enter a positive integer."
//    b. Return 1 (indicating an error) and exit.
// 6. Declare an integer array arr of size n to store the elements.
// 7. Prompt the user to enter n elements separated by spaces.
// 8. Read n integers into the arr array.
// 9. Declare two integer variables, largest, and smallest, and initialize both to the first element of the array arr[0].
// 10. Loop through the elements of the array from index 1 to n-1:
//     a. Compare the current element with the largest variable:
//        - If the current element is greater than largest, update largest to the current element.
//     b. Compare the current element with the smallest variable:
//        - If the current element is smaller than smallest, update smallest to the current element.
// 11. Print "Largest element:" followed by the value of largest.
// 12. Print "Smallest element:" followed by the value of smallest.
// 13. End
