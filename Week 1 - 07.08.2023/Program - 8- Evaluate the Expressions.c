
#include <stdio.h>

int main() {
    int a = 30, b = 10, c = 5, d = 15;
    int result1, result2, result3, result4;

    // Evaluate the expressions
    result1 = (a + b) * c / d;
    result2 = ((a + b) * c) / d;
    result3 = a + (b * c) / d;
    result4 = (a + b) * (c / d);

    // Print the results
    printf("(i)   (a + b) * c / d    = %d\n", result1);
    printf("(ii)  ((a + b) * c) / d  = %d\n", result2);
    printf("(iii) a + (b * c) / d    = %d\n", result3);
    printf("(iv)  (a + b) * (c / d)  = %d\n", result4);

    return 0;
}






// Algorithm: Evaluate Arithmetic Expressions

// 1. Start
// 2. Declare integer variables: a, b, c, d, result1, result2, result3, result4
// 3. Assign values: a = 30, b = 10, c = 5, d = 15
// 4. Evaluate expression (i): result1 = (a + b) * c / d
// 5. Evaluate expression (ii): result2 = ((a + b) * c) / d
// 6. Evaluate expression (iii): result3 = a + (b * c) / d
// 7. Evaluate expression (iv): result4 = (a + b) * (c / d)
// 8. Display "(i)   (a + b) * c / d    = [result1]"
// 9. Display "(ii)  ((a + b) * c) / d  = [result2]"
// 10. Display "(iii) a + (b * c) / d    = [result3]"
// 11. Display "(iv)  (a + b) * (c / d)  = [result4]"
// 12. End
