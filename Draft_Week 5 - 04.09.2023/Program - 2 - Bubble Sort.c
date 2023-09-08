#include <stdio.h>

void bubbleSort(int arr[], int n, char order) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            int compare;
            switch (order) {
                case 'a':
                    compare = (arr[j] > arr[j + 1]);
                    break;
                case 'd':
                    compare = (arr[j] < arr[j + 1]);
                    break;
                default:
                    printf("Invalid order. Please use 'a' for ascending or 'd' for descending order.\n");
                    return;
            }

            if (compare) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    char order;
    printf("Enter 'a' for ascending order or 'd' for descending order: ");
    scanf(" %c", &order);

    bubbleSort(arr, n, order);

    printf("Sorted array in %s order: ", (order == 'a') ? "ascending" : "descending");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
