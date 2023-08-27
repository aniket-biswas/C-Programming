#include <stdio.h>
#include <math.h>

int main() {
    int num, primeCount = 0, compositeCount = 0;

    printf("Enter numbers.\n");
    printf("Enter -1 to stop.\n");

    do {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num == -1) {
            break;
        }

        if (num <= 1) {
            // 1 is neither prime nor composite
        } else {
            int isPrime = 1;
            for (int i = 2; i * i <= num; ++i) {
                if (num % i == 0) {
                    isPrime = 0;
                    break;
                }
            }
            if (isPrime) {
                printf("%d is prime.\n", num);
                primeCount++;
            } else {
                printf("%d is composite.\n", num);
                compositeCount++;
            }
        }
    } while (1);

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
//    5. Set isPrime to 1
//    6. Loop i from 2 to the square root of num:
//       1. If num is divisible by i, set isPrime to 0 and break the loop
//    7. If isPrime is true, go to step 5.2
//    8. Else, go to step 5.3
// 5.1: Skip the rest of the loop and go to step 5
// 5.2: Print "num is prime.", increment primeCount, and go to step 5
// 5.3: Print "num is composite.", increment compositeCount, and go to step 5
// 6. Print "Total prime numbers:", primeCount
// 7. Print "Total composite numbers:", compositeCount
// 8. End



