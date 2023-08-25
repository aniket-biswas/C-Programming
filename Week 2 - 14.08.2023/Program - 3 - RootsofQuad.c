#include <stdio.h>
#include <math.h>

int main() {
    int cs;
    double a, b, c;
    double d, root1, root2,realPart,imaginaryPart;

    //Input the coefficients Method 2
    printf("Enter coefficient a: ");
    scanf("%lf", &a);
    printf("Enter coefficient b: ");
    scanf("%lf", &b);
    printf("Enter coefficient c: ");
    scanf("%lf", &c);


    // Calculate the discriminant
    d = b * b - 4 * a * c;

// Method 1: Using Switch Case

    //Initializing Cases using
    if (d>0){
        cs=1;
    }

    else if (d==0){
        cs=2;
    }

    else if (d<0) {
        cs=3;
    }

    else {
         printf("Invalid");
    }

    // Calculate the roots using switch case

    switch(cs){
case 1:
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        printf("Two distinct real roots:\n");
        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf\n", root2);
        break;

case 2:
        root1 = -b / (2 * a);
        printf("One/Equal real root:\n");
        printf("Root = %.2lf\n", root1);
        break;

case 3:
        realPart = -b / (2 * a);
        imaginaryPart = fabs(sqrt(-d)) / (2 * a);
        printf("Complex roots:\n");
        printf("Root 1 = %.2lf + %.2lfi\n", realPart, imaginaryPart);
        printf("Root 2 = %.2lf - %.2lfi\n", realPart, imaginaryPart);

default:
        printf("the quadratic equation has no real or complex roots.");
    }
    return 0;
}


// Algorithm: Quadratic Equation Solver

// 1. Start

// 2. Declare variables:
//    - cs (case selector)
//    - a, b, c (coefficients of the quadratic equation)
//    - d (discriminant)
//    - root1, root2 (real roots)
//    - realPart, imaginaryPart (for complex roots)

// 3. Prompt the user for input:
//    a. Print "Enter coefficient a: "
//    b. Read 'a' from the user
//    c. Print "Enter coefficient b: "
//    d. Read 'b' from the user
//    e. Print "Enter coefficient c: "
//    f. Read 'c' from the user

// 4. Calculate the discriminant:
//    d = b * b - 4 * a * c

// 5. Initialize 'cs' based on the discriminant:
//    a. If d > 0, set cs = 1
//    b. Else if d == 0, set cs = 2
//    c. Else, set cs = 3

// 6. Use a switch-case statement based on 'cs':
//    a. Case 1: Two distinct real roots
//       - Calculate root1 and root2 using the quadratic formula
//       - Print "Two distinct real roots:"
//       - Print "Root 1 = root1"
//       - Print "Root 2 = root2"
//       - Break

//    b. Case 2: One real root (equal)
//       - Calculate root1 using the quadratic formula
//       - Print "One/Equal real root:"
//       - Print "Root = root1"
//       - Break

//    c. Default Case: Complex roots
//       - Calculate realPart and imaginaryPart for complex roots
//       - Print "Complex roots:"
//       - Print "Root 1 = realPart + imaginaryPart i"
//       - Print "Root 2 = realPart - imaginaryPart i"

// 7. End

// Algorithm 2

// 1. Read the coefficients a, b, and c of the quadratic equation.
// 2. Calculate the discriminant (D) using the formula: D = b^2 - 4ac
// 3. Initialize variables root1 and root2 to store the roots.

// 4. Switch (based on the value of D):
//    - Case D > 0:
//      1. Calculate two real roots:
//         root1 = (-b + sqrt(D)) / (2a)
//         root2 = (-b - sqrt(D)) / (2a)
//      2. Display root1 and root2.
//      3. Break.
   
//    - Case D = 0:
//      1. Calculate a single real root:
//         root1 = -b / (2a)
//      2. Display root1.
//      3. Break.
   
//    - Case D < 0:
//      1. Calculate two complex roots:
//         realPart = -b / (2a)
//         imaginaryPart = sqrt(-D) / (2a)
//         root1 = realPart + imaginaryPart * i
//         root2 = realPart - imaginaryPart * i
//      2. Display root1 and root2.
//      3. Break.

//    - Default:
//      1. Display an error message indicating that the quadratic equation has no real or complex roots.
//      2. Break.

// 5. End.


// Method 2 : Using if else

// #include <stdio.h>
// #include <math.h>

// int main() {
//     double a, b, c;
//     double d, root1, root2, realPart, imaginaryPart;

//     // Input the coefficients
//     printf("Enter coefficient a: ");
//     scanf("%lf", &a);
//     printf("Enter coefficient b: ");
//     scanf("%lf", &b);
//     printf("Enter coefficient c: ");
//     scanf("%lf", &c);

//     // Calculate the discriminant
//     d = b * b - 4 * a * c;

//     if (d > 0) {
//         root1 = (-b + sqrt(d)) / (2 * a);
//         root2 = (-b - sqrt(d)) / (2 * a);
//         printf("Two distinct real roots:\n");
//         printf("Root 1 = %.2lf\n", root1);
//         printf("Root 2 = %.2lf\n", root2);
//     } else if (d == 0) {
//         root1 = -b / (2 * a);
//         printf("One/Equal real root:\n");
//         printf("Root = %.2lf\n", root1);
//     } else {
//         realPart = -b / (2 * a);
//         imaginaryPart = fabs(sqrt(-d)) / (2 * a);
//         printf("Complex roots:\n");
//         printf("Root 1 = %.2lf + %.2lfi\n", realPart, imaginaryPart);
//         printf("Root 2 = %.2lf - %.2lfi\n", realPart, imaginaryPart);
//     }

//     return 0;
// }

