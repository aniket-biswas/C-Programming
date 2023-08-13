/*Write a C program to display the size of the data type int, char, float, double, long
int and long double using size of ( ) operator.*/

#include <stdio.h>

int main() {
    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Size of char: %lu bytes\n", sizeof(char));
    printf("Size of float: %lu bytes\n", sizeof(float));
    printf("Size of double: %lu bytes\n", sizeof(double));
    printf("Size of long int: %lu bytes\n", sizeof(long int));
    printf("Size of long double: %lu bytes\n", sizeof(long double));

    return 0;
}


// Algorithm: Display Size of Data Types using sizeof() Operator

// 1. Start
// 2. Display "Size of int: [size] bytes", where [size] is the result of sizeof(int)
// 3. Display "Size of char: [size] bytes", where [size] is the result of sizeof(char)
// 4. Display "Size of float: [size] bytes", where [size] is the result of sizeof(float)
// 5. Display "Size of double: [size] bytes", where [size] is the result of sizeof(double)
// 6. Display "Size of long int: [size] bytes", where [size] is the result of sizeof(long int)
// 7. Display "Size of long double: [size] bytes", where [size] is the result of sizeof(long double)
// 8. End
