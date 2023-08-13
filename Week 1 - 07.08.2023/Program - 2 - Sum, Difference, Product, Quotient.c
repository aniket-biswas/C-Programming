//Write a C program to find the sum, difference, product and quotient of 2 numbers.

#include<stdio.h>

int main()
{
    float a, b,sumab,diffab,prodab,quoab;
    printf("This program adds two numbers\n");
    printf("Enter 1st Number:");
    scanf("%f",&a);
    printf("Enter 2nd Number:");
    scanf("%f",&b);
    sumab=a+b;
    diffab=a-b;
    prodab=a*b;
    quoab=a/b;
    printf("%f is the sum of Two Numbers\n",sumab);
    printf("%f is the difference of Two Numbers\n",diffab);
    printf("%f is the product of Two Numbers\n",prodab);
    printf("%f is the quotient of Two Numbers\n",quoab);
    return 0;
} //end main



// Algorithm: Perform Arithmetic Operations on Two Numbers

// 1. Start
// 2. Declare float variables: a, b, sumab, diffab, prodab, quoab
// 3. Display "This program adds two numbers"
// 4. Display "Enter 1st Number:"
// 5. Read a float value from the user and store it in variable 'a'
// 6. Display "Enter 2nd Number:"
// 7. Read a float value from the user and store it in variable 'b'
// 8. Calculate the sum of the two numbers (sumab) by adding 'a' and 'b'
// 9. Calculate the difference of the two numbers (diffab) by subtracting 'b' from 'a'
// 10. Calculate the product of the two numbers (prodab) by multiplying 'a' and 'b'
// 11. Calculate the quotient of the two numbers (quoab) by dividing 'a' by 'b'
// 12. Display "[sumab] is the sum of Two Numbers"
// 13. Display "[diffab] is the difference of Two Numbers"
// 14. Display "[prodab] is the product of Two Numbers"
// 15. Display "[quoab] is the quotient of Two Numbers"
// 16. End
