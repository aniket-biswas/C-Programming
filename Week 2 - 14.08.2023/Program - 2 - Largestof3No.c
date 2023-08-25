#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Input the three numbers
    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Compare and find the largest number
    if (num1 >= num2 && num1 >= num3) {
        printf("%d is the largest number.\n", num1);
    } else if (num2 >=num1 && num2 >= num3) {
        printf("%d is the largest number.\n", num2);
    } else {
        printf("%d is the largest number.\n", num3);
    }

    return 0;
}


// Algorithm: Compare Three Integers and Find the Largest

// 1. Start
// 2. Declare integer variables: num1, num2, num3
// 3. Display "Enter 1st integer:"
// 4. Read an integer value from the user and store it in variable 'num1'
// 5. Display "Enter 2nd integer:"
// 6. Read an integer value from the user and store it in variable 'num2'
// 7. Display "Enter 3rd integer:"
// 8. Read an integer value from the user and store it in variable 'num3'
// 9. If 'num1' is greater than or equal to both 'num2' and 'num3', then
//      9.1 Display "[num1] is the largest number."
//    Else if 'num2' is greater than or equal to both 'num1' and 'num3', then
//      9.2 Display "[num2] is the largest number."
//    Else
//      9.3 Display "[num3] is the largest number."
// 10. End
