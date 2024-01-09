#include <stdio.h>

int main()
{
    char greetings[] = "Hello World!";

    printf("%s", greetings);

    printf("%c", greetings[0]);

    greetings[0] = 'J';
    printf("%s", greetings);

    /////////////////////////////////////////

    return 0;
}