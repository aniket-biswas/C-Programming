//Inch_to_Cm
#include<stdio.h>
int main()
{
    float centimeters, inches;
    printf("This program converts inches to centimetres\n");
    printf("Enter a number:");
    scanf("%f",&inches);
    centimeters=inches*2.54;
    printf("%f inches is equivalent to %f centimeters\n", inches, centimeters);
    return 0;
} //end main
