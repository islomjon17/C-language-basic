#include <stdio.h>

int main()
{
    int myNumbers[] = {25, 50, 75, 100};

    printf("%d\n", myNumbers[0]); // Massivning birinchi elementini chop etadi

    myNumbers[0] = 33; // Birinchi element qiymatini o'zgartiradi

    printf("%d\n", myNumbers[0]); // Endi 25 o'rniga 33 ni chiqaradi

    // Massivning barcha elementlarini chop etish uchun tsikl
    int i;
    for (i = 0; i < 4; i++)
    {
        printf("%d\n", myNumbers[i]);
    }

    // Boshqa usulda massivni e'lon qilish va qiymatlarini berish
    int myNewNumbers[4] = {25, 50, 75, 100};

    // myNumbers massivning hajmini topish
    printf("%lu\n", sizeof(myNumbers)); // O'lchamini baytda chiqaradi (4 ta butun son uchun 16 bo'lishi kerak)

    // myNumbers massivdagi elementlar sonini topish
    int length = sizeof(myNumbers) / sizeof(myNumbers[0]);
    printf("%d\n", length); // Elementlar sonini chiqaradi (4 ta bo'lishi kerak)

    // length o'zgaruvchisi yordamida myNumbers massivini tsikl orqali o'tish
    for (i = 0; i < length; i++)
    {
        printf("%d\n", myNumbers[i]);
    }

    // Farz etilgan yoshlarni saqlaydigan massiv
    int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};

    float avg, sum = 0;

    // ages massivning uzunligini hisoblash
    int agesLength = sizeof(ages) / sizeof(ages[0]);

    // ages massivini o'tish uchun tsikl
    for (i = 0; i < agesLength; i++)
    {
        sum += ages[i];
    }

    // O'rtacha yoshni summani massiv uzunligiga bo'lganiga bo'lib hisoblash
    avg = sum / agesLength;

    // O'rtacha yoshni chiqarish
    printf("O'rta yosh: %.2f\n", avg);

    return 0;
}
