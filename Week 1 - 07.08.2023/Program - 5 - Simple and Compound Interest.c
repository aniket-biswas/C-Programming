/*Input P, N and R to compute simple and compound interest. [Hint: SI = PNR/100,CI = P(1+R/100)N
-P]*/


#include<stdio.h>
#include<math.h>
int main()
{
    float p;
    float n;
    float r;
    float si;
    float ci;

    printf("Enter Principal:");
    scanf("%f",&p);
    printf("Enter Time in Years:");
    scanf("%f",&n);
    printf("Enter Rate:");
    scanf("%f",&r);
    si=(p*n*r)/100;
    ci= (p*(pow((1+(r/100)),n)))-p;
    printf("Simple Interest: %f\n",si);
    printf("Compound Interest: %f\n",ci);
    return 0;

}


// Algorithm: Calculate Simple and Compound Interest

// 1. Start
// 2. Declare float variables: p (Principal), n (Time in Years), r (Rate), si (Simple Interest), ci (Compound Interest)
// 3. Display "Enter Principal:"
// 4. Read a float value from the user and store it in variable 'p'
// 5. Display "Enter Time in Years:"
// 6. Read a float value from the user and store it in variable 'n'
// 7. Display "Enter Rate:"
// 8. Read a float value from the user and store it in variable 'r'
// 9. Calculate Simple Interest (si) using the formula: si = (p * n * r) / 100
// 10. Calculate Compound Interest (ci) using the formula: ci = (p * (pow((1 + (r / 100)), n))) - p
// 11. Display "Simple Interest: [si]"
// 12. Display "Compound Interest: [ci]"
// 13. End





