#include <stdio.h>

int main() {
    float myFloatNum = 3.5;

    printf("%f\n", myFloatNum);   // Default will show 6 digits after the decimal point
    printf("%.1f\n", myFloatNum); // Only show 1 digit
    printf("%.2f\n", myFloatNum); // Only show 2 digits
    printf("%.4f\n", myFloatNum); // Only show 4 digits

    // Create variables of different data types
    int items = 50;
    float cost_per_item = 9.99;
    float total_cost = items * cost_per_item;
    char currency = '$';

    // Print variables
    printf("Number of items: %d\n", items);
    printf("Cost per item: %.2f %c\n", cost_per_item, currency);
    printf("Total cost = %.2f %c\n", total_cost, currency);

    return 0;
}
