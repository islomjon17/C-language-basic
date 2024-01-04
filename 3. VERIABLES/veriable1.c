#include <stdio.h>

int main() {
//     // Declare and initialize an integer variable
//     int myNum = 15;
//     printf("%d\n", myNum);
//     // Declare a variable
//     int myNum2;
//     int Mynum2;
 
//     // Assign a value to the variable
//     myNum2 = 15;
//     Mynum2 = 16;
//     printf("Hello World!\n  %d, %d", myNum2, Mynum2);
//     // Print the value of myNum (nothing happens due to incorrect format specifier)
//     printf(myNum);  // Nothing happens

//     // Print the value of myNum using the correct format specifier (%d for integers)
//     printf("%d\n", myNum);  // Outputs 15












    // // Create variables of different types and print their values
    // int myIntNum = 15;            // Integer (whole number)
    // float myFloatNum = 5.99;      // Floating point number
    // char myLetter = 'D';          // Character

    // printf("%d\n", myIntNum);     // Print integer
    // printf("%f\n", myFloatNum);   // Print float
    // printf("%c\n", myLetter);     // Print character








    int myNum = 15;
    int myLetter = 'D'; 
    // Print a message along with the value of myNum
    printf("My favorite number is: %d\n", myNum);

    // Print a message along with the values of myNum and myLetter
    printf("My number is %d and my letter is %c\n", myNum,  myLetter);

    // Changing the value of myNum
    myNum = 10;  // Now myNum is 10

    // Assigning the value of myOtherNum (23) to myNum
    int myOtherNum = 23;
    myNum = myOtherNum; // myNum is now 23, instead of 15
    printf("%d\n", myNum);

    // Assigning values between variables
    int x = 5, y = 6, z = 50;
    printf("%d\n", x + y + z);

    // Assigning the same value to multiple variables
    int a, b, c;
    a = b = c = 50;
    printf("%d\n", a + b + c);

    // Good variable naming practice
    int minutesPerHour = 60;

    // Less descriptive variable naming
    int m = 60;

    return 0;
}
