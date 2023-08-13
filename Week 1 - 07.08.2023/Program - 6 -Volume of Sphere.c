/*Input radius to find the volume and surface area of a sphere. [Hint: volume =
(4πr3)/3, Area=4πr2]*/

#include <stdio.h>
#include <math.h>

int main() {
    float r;
    float volume, surfaceArea;
    const float pi = 3.14159;

    printf("Input radius to find the volume and surface area of a sphere.\n");
    printf("Enter the Radius: ");
    scanf("%f", &r);

    volume = (4 * pi * pow(r, 3)) / 3;
    surfaceArea = 4 * pi * pow(r, 2);

    printf("Volume of Sphere: %f\n", volume);
    printf("Surface Area of Sphere: %f\n", surfaceArea);

    return 0;
}


// Algorithm: Calculate Volume and Surface Area of a Sphere

// 1. Start
// 2. Declare float variables: r (Radius), volume, surfaceArea
// 3. Display "Input radius to find the volume and surface area of a sphere."
// 4. Display "Enter the Radius:"
// 5. Read a float value from the user and store it in variable 'r'
// 6. Calculate the Volume of the Sphere using the formula: volume = (4 * π * r^3) / 3, where π is approximately 3.14159
// 7. Calculate the Surface Area of the Sphere using the formula: surfaceArea = 4 * π * r^2
// 8. Display "Volume of Sphere: [volume]"
// 9. Display "Surface Area of Sphere: [surfaceArea]"
// 10. End
