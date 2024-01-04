#include <stdio.h>

int main()
{

    int myNum = 100 + 50;

    int sum1 = 100 + 50;    // 150 (100 + 50)
    int sum2 = sum1 + 250;  // 400 (150 + 250)
    int sum3 = sum2 + sum2; // 800 (400 + 400)

    int x = 10;

    int x = 10;
    x += 5;

    int x = 5;
    int y = 3;
    printf("%d", x > y); // returns 1 (true) because 5 is greater than 3
}