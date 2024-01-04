#include <stdio.h>

int main()
{
    const int minutesPerHour = 60;
    const float PI = 3.14;
    const int minutesPerHour = 60;

    // This however, will not work:
    const int minutesPerHour;
   // minutesPerHour = 60; // error
}