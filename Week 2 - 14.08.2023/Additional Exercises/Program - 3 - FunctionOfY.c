#include <stdio.h>
#include <math.h>

int main() {
    double x;

    // Read the value of x from the user
    printf("Enter the value of x: ");
    scanf("%lf", &x);

    // Calculate the result of Y
    if (x > 0){
        printf("Y = 1\n");
    }

     else if (x == 0){
        printf("Y = 0\n");
    }

     else{
        printf("Y = -1\n");
    }

    return 0;
}


// Algorithm to Evaluate Y based on the value of x:

// 1. Start
// 2. Declare a variable x of type double.
// 3. Display "Enter the value of x: ".
// 4. Read the value of x from the user.
// 5. If x > 0, then
//       Display "Y = 1"
//    Else if x == 0, then
//       Display "Y = 0"
//    Else
//       Display "Y = -1"
// 6. End
