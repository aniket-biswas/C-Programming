#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Input the three numbers Method 2
    printf("Enter 1st integer: ");
    scanf("%d" , &num1);
    printf("Enter 2nd integer: ");
    scanf("%d" , &num2);
    printf("Enter 3rd integer: ");
    scanf("%d" , &num3);

    // Find the smallest number using the conditional operator
    int smallest = (num1 < num2) ? ((num1 < num3) ? num1 : num3) : ((num2 < num3) ? num2 : num3);

    printf("The smallest number is %d.\n", smallest);

    return 0;
}



// Algorithm: Find the Smallest of Three Numbers

// 1. Start
// 2. Declare float variables: num1, num2, num3, smallest
// 3. Display "Enter three numbers:"
// 4. Read three float values from the user and store them in variables 'num1', 'num2', and 'num3'
// 5. Initialize 'smallest' with the value of 'num1'
// 6. If 'num2' is less than 'smallest', then
//      6.1 Update 'smallest' with the value of 'num2'
// 7. If 'num3' is less than 'smallest', then
//      7.1 Update 'smallest' with the value of 'num3'
// 8. Display "[smallest] is the smallest number."
// 9. End
