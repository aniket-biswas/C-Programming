#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    double u, a, t, result;

    // Input choice from user
    printf("Choose an option:\n");
    printf("1. Calculate ut + 1/2 at^2\n");
    printf("2. Calculate a^2 + 2ab + b^2\n");
    scanf("%d", &choice);

    if (choice == 1) {
        // Calculate ut + 1/2 at^2
        printf("Enter u, a, and t: ");
        scanf("%lf %lf %lf", &u, &a, &t);

        result = u * t + 0.5 * a * pow(t, 2);

        printf("ut + 1/2 at^2 = %.2lf\n", result);
    } else if (choice == 2) {
        // Calculate a^2 + 2ab + b^2
        double b;

        printf("Enter a, b: ");
        scanf("%lf %lf", &a, &b);

        result = pow(a, 2) + 2 * a * b + pow(b, 2);

        printf("a^2 + 2ab + b^2 = %.2lf\n", result);
    } else {
        printf("Invalid choice\n");
    }

    return 0;
}
