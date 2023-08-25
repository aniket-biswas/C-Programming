#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double discriminant, root1, root2;

    printf("Enter coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    switch (discriminant > 0) {
        case 1:
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("Two real roots: %.2lf and %.2lf\n", root1, root2);
            break;
        case 0:
            if (discriminant == 0) {
                root1 = -b / (2 * a);
                printf("One real root: %.2lf\n", root1);
            } else {
                double realPart = -b / (2 * a);
                double imaginaryPart = sqrt(-discriminant) / (2 * a);
                printf("Two complex roots: %.2lf + %.2lfi and %.2lf - %.2lfi\n", realPart, imaginaryPart, realPart, imaginaryPart);
            }
            break;
        default:
            printf("Error: No valid real or complex roots exist.\n");
            break;
    }

    return 0;
}

// Algorithm

// 1. Read the coefficients a, b, and c of the quadratic equation.
// 2. Calculate the discriminant (D) using the formula: D = b^2 - 4ac.
// 3. Initialize variables root1 and root2 to store the roots.

// 4. Switch (based on the value of D):
//    - Case D > 0:
//      1. Calculate two real roots:
//         root1 = (-b + sqrt(D)) / (2a)
//         root2 = (-b - sqrt(D)) / (2a)
//      2. Display "Two real roots: root1 and root2".
//      3. Break.
   
//    - Case D = 0:
//      1. Calculate a single real root:
//         root1 = -b / (2a)
//      2. Display "One real root: root1".
//      3. Break.
   
//    - Default:
//      1. If D < 0:
//         1. Calculate realPart = -b / (2a) and imaginaryPart = sqrt(-D) / (2a).
//         2. Display "Two complex roots: realPart + imaginaryPart * i and realPart - imaginaryPart * i".
//      2. Else (for any other cases):
//         1. Display "Error: No valid real or complex roots exist."
//      3. Break.

// 5. End.
