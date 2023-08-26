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

// Algorithm:

// 1. Start
// 2. Initialize num, primeCount, and compositeCount to 0
// 3. Print "Enter numbers."
// 4. Print "Enter -1 to stop."
// 5. Loop:
//    1. Print "Enter a number: "
//    2. Read num
//    3. If num is equal to -1, go to step 6
//    4. If num is less than or equal to 1, go to step 5.1
//    5. If isPrime(num) returns true, go to step 5.2
//    6. Else, go to step 5.3
// 6. Print "Total prime numbers:", primeCount
// 7. Print "Total composite numbers:", compositeCount
// 8. End

// Function isPrime(num):
// 1. If num is less than or equal to 1, return 0
// 2. Loop i from 2 to the square root of num:
//    1. If num is divisible by i, return 0
// 3. Return 1
