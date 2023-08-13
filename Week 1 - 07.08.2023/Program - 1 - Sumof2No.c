/* Write a C program to add two integers a and b read through the keyboard. Display the
result using third variable sum */


#include<stdio.h>
int main()
{
    float a, b,sum;
    // 
    printf("This program adds two numbers\n");
    printf("Enter 1st Number:");
    scanf("%f",&a);
    printf("Enter 2nd Number:");
    scanf("%f",&b);
    sum=a+b;
    // The above code will add two numbers
    printf("%f is sum of Two Numbers\n",sum);
    // The above code will print the sum two numbers
    return 0;
} //end main



// Algorithm: Add Two Numbers and Display the Sum

// 1. Start
// 2. Declare float variables: a, b, sum
// 3. Display "This program adds two numbers"
// 4. Display "Enter 1st Number:"
// 5. Read a float value from the user and store it in variable 'a'
// 6. Display "Enter 2nd Number:"
// 7. Read a float value from the user and store it in variable 'b'
// 8. Calculate the sum of the two numbers (sum) by adding 'a' and 'b'
// 9. Display "[sum] is sum of Two Numbers"
// 10. End
