#include <stdio.h>

int main() {
    // Automatic conversion: float to int
    int myInt = 9.99; // This assignment will truncate the decimal part

    printf("%d\n", myInt); // Outputs 9

    float sum = 5 / 2; // Integer division resulting in 2, assigned to a float

    printf("%f\n", sum); // Outputs 2.000000 (due to integer division)

    // Manual conversion: int to float
    float convertedSum = (float)5 / 2; // Explicitly casting one operand to float

    printf("%f\n", convertedSum); // Outputs 2.500000

    return 0;
}
