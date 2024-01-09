#include <stdio.h>

int main()
{

    char carName[] = "Volvo";
    int i;

    for (i = 0; i < 5; ++i)
    {
        printf("%c\n", carName[i]);
    }

    int length = sizeof(carName) / sizeof(carName[0]);
    int i;

    for (i = 0; i < length; ++i)
    {
        printf("%c\n", carName[i]);
    }

    char salom[] = {'S', 'A', 'L', 'O', 'M', ' ', 'D', 'U', 'N', 'Y', 'O', '!', '\0'};
    printf("%s", salom);

    char salom[] = {'S', 'A', 'L', 'O', 'M', ' ', 'D', 'U', 'N', 'Y', 'O', '!', '\0'};
    char salom2[] = "SALOM DUNYO!";

    printf("%lu\n", sizeof(salom));
    printf("%lu\n", sizeof(salom2));

    char habar[] = "Salom, ishlar qalay";
    char ism[] = "Xasan";

    printf("%s %s!", habar, ism);

    return 0;
}