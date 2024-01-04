#include <stdio.h>

int main() {

    int t = 22;
    if (t < 18) {
        printf("Good day.\n");
    } else {
        printf("Good evening.\n");
    }

    int cond1 = 5;
    int cond2 = 10;
    int cond3 = 15;

    if (cond1 > cond2) {
        // block of code to be executed if cond1 is true
    } else if (cond2 < cond3) {
        // block of code to be executed if cond1 is false and cond2 is true
    } else {
        // block of code to be executed if both cond1 and cond2 are false
    }

    int code = 2468;

    if (code == 2468) {
        printf("Correct code.\nThe door is now open.\n");
    } else {
        printf("Wrong code.\nThe door remains closed.\n");
    }

    int num = -5; // Change the number to test

    if (num > 0) {
        printf("The value is a positive number.\n");
    } else if (num < 0) {
        printf("The value is a negative number.\n");
    } else {
        printf("The value is 0.\n");
    }

    return 0;
}
