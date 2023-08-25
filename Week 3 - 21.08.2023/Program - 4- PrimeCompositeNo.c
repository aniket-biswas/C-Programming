#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) {
        return 0; // 1 is neither prime nor composite
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return 0; // Not prime
        }
    }
    return 1; // Prime
}

int main() {
    int num, primeCount = 0, compositeCount = 0;

    printf("Enter numbers. \nEnter -1 to stop.\n");

    do {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num == -1) {
            break;
        }

        if (isPrime(num)) {
            printf("%d is prime.\n", num);
            primeCount++;
        } else if (num > 1) {
            printf("%d is composite.\n", num);
            compositeCount++;
        }
    } while (1); // Keep looping until -1 is entered

    printf("Total prime numbers: %d\n", primeCount);
    printf("Total composite numbers: %d\n", compositeCount);

    return 0;
}