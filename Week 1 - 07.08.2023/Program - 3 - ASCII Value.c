//Write a C program to print the ASCII value of a character

#include<stdio.h>
int main (){
    char c;
    printf("Enter the Character:");
    scanf("%c",&c);
    printf("The ASCII Value of %c is %d\n",c,c);
    return 0;
}


// Algorithm: ASCII Value of a Character

// 1. Start
// 2. Declare a character variable 'c'
// 3. Display the message: "Enter the Character:"
// 4. Read a character from the user and store it in variable 'c'
// 5. Display the message: "The ASCII Value of [character] is [ASCII value]"
// 6. Calculate the ASCII value of the character 'c'
//    6.1 Convert the character 'c' to its corresponding ASCII value using the %d format specifier
// 7. End
