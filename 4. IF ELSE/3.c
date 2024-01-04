#include <stdio.h>

int main() {

    int currentTime = 20;

    // Checking if it's morning, afternoon, or evening based on time
    if (currentTime < 12) {
        printf("Good morning.\n");
    } else if (currentTime < 18) {
        printf("Good afternoon.\n");
    } else {
        printf("Good evening.\n");
    }

    // Using a ternary operator to check if a number is even or odd
    int number = 27;
    (number % 2 == 0) ? printf("The number is even.\n") : printf("The number is odd.\n");

    // Checking if a given year is a leap year or not
    int year = 2024;
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    // Checking if a character is a vowel or consonant
    char ch = 'e';
    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c is a vowel.\n", ch);
            break;
        default:
            printf("%c is a consonant.\n", ch);
            break;
    }

    return 0;
}
