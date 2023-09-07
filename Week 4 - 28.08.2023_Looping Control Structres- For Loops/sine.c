// #include <stdio.h>
// #include <math.h>

// int main() {
//     double x;
//     int n;

//     printf("Enter the value of x in radians: ");
//     scanf("%lf", &x);

//     printf("Enter the number of terms (n): ");
//     scanf("%d", &n);

//     double result = 0.0;
//     int sign = 1;

//     for (int i = 1; i <= n; i += 2) {
//         double term = sign * pow(x, i) / 1.0;

//         for (int j = 2; j <= i; j++) {
//             term /= j;
//         }

//         result += term;
//         sign *= -1;
//     }

//     printf("sin(%.2f) using %d terms is approximately: %.6f\n", x, n, result);

//     return 0;
// }

#include <stdio.h>

int main() {
    int num, sum = 0;

    // Prompt the user to enter a number
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    printf("Divisors of %d: 1", num);

    // Find and sum the divisors of the number
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
            printf(" + %d", i);
        }
    }

    // Check if the number is perfect
    if (sum == num) {
        printf(" = %d\n", sum);
        printf("%d is a perfect number.\n", num);
    } else {
        printf(" = %d\n", sum);
        printf("%d is not a perfect number.\n", num);
    }

    return 0;
}
