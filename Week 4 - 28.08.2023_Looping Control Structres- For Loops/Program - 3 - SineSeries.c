#include <stdio.h>
#include <math.h>

int main() {
    double x;
    int n;

    printf("Enter the value of x in radians: ");
    scanf("%lf", &x);

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    double result = 0.0;
    int sign = 1;

    for (int i = 1; i <= n; i += 2) {
        double term = sign * pow(x, i) / 1.0;

        for (int j = 2; j <= i; j++) {
            term /= j;
        }

        result += term;
        sign *= -1;
    }

    printf("sin(%.2f) using %d terms is approximately: %.6f\n", x, n, result);

    return 0;
}

// Algorithm

// 1. Start
// 2. Declare a double variable x (angle in radians) and an integer variable n (number of terms).
// 3. Prompt the user to enter the value of x in radians and read it into x.
// 4. Prompt the user to enter the number of terms (n) and read it into n.
// 5. Declare a double variable result and an integer variable sign, both initialized to 0.0 and 1, respectively.
// 6. Initialize a loop counter i to 1.
// 7. Initialize result to 0.0.
// 8. Enter a loop that iterates while i is less than or equal to n:
//    a. Calculate term as sign times x raised to the power of i, divided by 1.0.
//    b. Enter an inner loop with a counter j, initialized to 2:
//       i. Divide term by j.
//       ii. Increment j by 1.
//    c. Add term to result.
//    d. Change the sign (toggle between positive and negative) by multiplying sign by -1.
//    e. Increment i by 2 to skip even terms in the Taylor series.
// 9. End the loop.
// 10. Print the result with a message, e.g., "sin(%.2f) using %d terms is approximately: %.6f".
// 11. End.
