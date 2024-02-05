#include <stdio.h>

int main() {
    // Set the maximum possible score in the game to 500
    int maxScore = 500;

    // The actual score of the user
    int userScore = 420;

    /* Calculate the percentage of the user's score in relation to the maximum available score.
    Convert userScore to float to ensure accurate division */
    float percentage = ((float)userScore / maxScore) * 100.0;

    // Print the percentage with two decimal places
    printf("User's percentage is %.2f\n", percentage);

    return 0;
}
