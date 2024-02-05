#include <stdio.h>

int main()
{
    int num1 = 5;
    int num2 = 2;
    float sum = (float)num1 / num2;

    printf("%f\n", sum); 
    
    num1 = 5;
    num2 = 2;
    sum = (float)num1 / num2; 

    printf("%.1f\n", sum); 

    return 0;
}
