// Also displays the prime and composite numbers entered by the user seperately.
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
    printf("Enter numbers. Enter -1 to stop.\n");

    // Initialize arrays to store prime and composite numbers
    int primeNumbers[100], compositeNumbers[100];
    int primeIndex = 0, compositeIndex = 0;

    do {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num == -1) {
            break;
        }

        if (isPrime(num)) {
            printf("%d is prime.\n", num);
            primeNumbers[primeIndex++] = num;
            primeCount++;
        } else if (num > 1) {
            printf("%d is composite.\n", num);
            compositeNumbers[compositeIndex++] = num;
            compositeCount++;
        }
    } while (1); // Keep looping until -1 is entered

    printf("\nPrime numbers entered: ");
    for (int i = 0; i < primeIndex; ++i) {
        printf("%d ", primeNumbers[i]);
    }

    printf("\nComposite numbers entered: ");
    for (int i = 0; i < compositeIndex; ++i) {
        printf("%d ", compositeNumbers[i]);
    }

    printf("\nTotal prime numbers: %d\n", primeCount);
    printf("Total composite numbers: %d\n", compositeCount);

    return 0;
}



// #include <stdio.h>

// int is_prime(int num) {
//     if (num <= 1) {
//         return 0; // 0 and 1 are not prime numbers
//     }
//     for (int i = 2; i * i <= num; i++) {
//         if (num % i == 0) {
//             return 0; // Not a prime number
//         }
//     }
//     return 1; // Prime number
// }

// int main() {
//     int num;
//     int prime_count = 0, composite_count = 0;

//     do {
//         printf("Enter a number (-1 to exit): ");
//         scanf("%d", &num);

//         if (num == -1) {
//             break; // Exit loop if -1 is encountered
//         }

//         if (num == 1) {
//             continue; // Skip 1, as it's neither prime nor composite
//         }

//         if (is_prime(num)) {
//             prime_count++;
//         } else {
//             composite_count++;
//         }

//     } while (1);

//     printf("Number of prime numbers entered: %d\n", prime_count);
//     printf("Number of composite numbers entered: %d\n", composite_count);

//     return 0;
// }

// Algorithm:

// 1. Initialize prime_count = 0, composite_count = 0.

// 2. Enter a loop:
//    a. Display "Enter a number (-1 to exit): ".
//    b. Read input into num.

//    c. If num is equal to -1:
//       i. Exit the loop.

//    d. If num is equal to 1:
//       i. Continue to the next iteration of the loop.
//       ii. Skip the rest of the loop and go back to step 2a.

//    e. Check if num is a prime number using the function is_prime(num).
//       i. If it is a prime number:
//          - Increment prime_count by 1.
//       ii. Else:
//          - Increment composite_count by 1.

//    f. Go back to step 2a.

// 3. Display "Number of prime numbers entered: prime_count".
// 4. Display "Number of composite numbers entered: composite_count".
// 5. Exit the program.

// Function is_prime(num):
// 1. If num is less than or equal to 1:
//    a. Return 0.

// 2. Loop i from 2 to the square root of num:
//    a. If num is divisible by i:
//       i. Return 0.

// 3. Return 1.

// Main program:
// 1. Call the main function to start the program.


// #include <stdio.h>

// // Function to check if a number is prime
// int isPrime(int num) {
//     if (num <= 1) {
//         return 0; // 1 is neither prime nor composite
//     }
//     for (int i = 2; i * i <= num; ++i) {
//         if (num % i == 0) {
//             return 0; // Not prime
//         }
//     }
//     return 1; // Prime
// }

// int main() {
//     int num, primeCount = 0, compositeCount = 0;

//     printf("Enter numbers. Enter -1 to stop.\n");

//     do {
//         printf("Enter a number: ");
//         scanf("%d", &num);

//         if (num == -1) {
//             break;
//         }

//         if (isPrime(num)) {
//             printf("%d is prime.\n", num);
//             primeCount++;
//         } else if (num > 1) {
//             printf("%d is composite.\n", num);
//             compositeCount++;
//         }
//     } while (1); // Keep looping until -1 is entered

//     printf("Total prime numbers: %d\n", primeCount);
//     printf("Total composite numbers: %d\n", compositeCount);

//     return 0;
// }

