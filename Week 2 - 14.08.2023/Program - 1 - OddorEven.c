#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }

    return 0;
}



// Algorithm: Check if an Integer is Odd or Even

// 1. Start
// 2. Declare integer variable: num
// 3. Display "Enter an integer:"
// 4. Read an integer value from the user and store it in variable 'num'
// 5. If 'num' modulo 2 is equal to 0, then   //(num%2 == 0)
//      5.1 Display "[num] is even."
//    Else
//      5.2 Display "[num] is odd."
// 6. End
