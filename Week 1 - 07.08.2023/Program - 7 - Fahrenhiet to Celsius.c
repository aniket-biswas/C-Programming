//Convert the given temperature in Fahrenheit to Centigrade. [Hint: C=5/9(F-32)]

#include<stdio.h>
int main()
{
       float f;
       float c;
       printf("Enter temp in fahrenhiet:");
       scanf("%f",&f);
       c=((f-32)*(5/9.0));
       printf("Temp in Celsius: %f",c);
       return 0;

}


// Algorithm: Convert Fahrenheit to Celsius

// 1. Start
// 2. Declare float variables: f (Temperature in Fahrenheit), c (Temperature in Celsius)
// 3. Display "Enter temp in Fahrenheit:"
// 4. Read a float value from the user and store it in variable 'f'
// 5. Calculate the Temperature in Celsius (c) using the formula: c = (f - 32) * (5 / 9.0)
// 6. Display "Temp in Celsius: [c]"
// 7. End
