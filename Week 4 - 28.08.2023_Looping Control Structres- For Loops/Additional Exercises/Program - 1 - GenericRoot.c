#include <stdio.h>

int main() {
    int number;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    // Calculate generic root
    while (number > 9) {
        int sum = 0;
        
        // Calculate sum of digits
        while (number > 0) {
            sum += number % 10;
            number /= 10;
        }
        
        number = sum;
    }
    
    printf("Generic root is: %d\n", number);
    
    return 0;
}





// Algorithm to Calculate Generic Root of a Number:

// 1. Start
// 2. Declare variables: num, sum
// 3. Display "Enter a number: "
// 4. Read num from the user
// 5. While num is greater than 9, do the following:
//    a. Set sum = 0
//    b. While num is greater than 0, do the following:
//       i. Calculate sum = sum + num % 10
//       ii. Update num = num / 10
//    c. Set num = sum
// 6. Display "Generic root of " + num + " is: " + num
// 7. End
