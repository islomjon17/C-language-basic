#include <stdio.h>

int main()
{
    int num1 = 5;
    int num2 = 2;
    float sum = (float)num1 / num2;

    printf("%f\n", sum); // Outputs 2.500000

    // Reassigning values to variables should not include redeclaration
    num1 = 5;
    num2 = 2;
    sum = (float)num1 / num2; // Using existing variables, not redeclaring

    printf("%.1f\n", sum); // Outputs 2.5

    return 0;
}
