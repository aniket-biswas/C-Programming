#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("The number is zero.\n");
    } else if (num < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is positive.\n");
    }

    return 0;
}


// Algorithm: Determine if a Number is Zero, Negative, or Positive

// 1. Start
// 2. Declare integer variable: num
// 3. Display "Enter a number:"
// 4. Read an integer value from the user and store it in variable 'num'
// 5. If 'num' is equal to 0, then
//      5.1 Display "The number is zero."
//    Else if 'num' is less than 0, then
//      5.2 Display "The number is negative."
//    Else
//      5.3 Display "The number is positive."
// 6. End
