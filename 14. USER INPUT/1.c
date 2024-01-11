#include <stdio.h>

int main()
{

    // Foydalanuvchi kiritishi

    // Foydalanuvchidan olingan sonni saqlaydigan butun sonli o'zgaruvchi yaratish
    int meningSonim;

    // Foydalanuvchidan son kiriting degan so'rov
    printf("Son kiriting: \n");

    // Foydalanuvchi kiritgan sonni olish va saqlash
    scanf("%d", &meningSonim);

    // Foydalanuvchi kiritgan sonni chiqarish
    printf("Sizning soningiz: %d", meningSonim);

    // Ko'p murojatlar
    ////////////////////////////////////////////
    // Butun son va belgini o'z ichiga oladigan o'zgaruvchilar yaratish
    int menikiSonim;
    char menikiBelgim;

    // Foydalanuvchidan son VA belgini kiriting degan so'rov
    printf("Son VA belgi kiriting va enter tugmasini bosing: \n");

    // Foydalanuvchi tomonidan kiritilgan son VA belgini olish va saqlash
    scanf("%d %c", &menikiSonim, &menikiBelgim);

    // Kiritilgan sonni chiqarish
    printf("Sizning soningiz: %d\n", menikiSonim);

    // Kiritilgan belgini chiqarish
    printf("Sizning belgingiz: %c\n", menikiBelgim);

    // Matn kiritish
    ////////////////////////////////////////////
    // Matnni saqlaydigan qator o'zgaruvchisi yaratish
    char ism[30];

    // Foydalanuvchidan matn kiriting degan so'rov
    printf("Ismingizni kiriting: \n");

    // Foydalanuvchi tomonidan kiritilgan matnni olish va saqlash
    scanf("%s", ism);

    // Kiritilgan matnni chiqarish
    printf("Salom %s", ism);

    // Bo'shliq bilan kiritish
    ////////////////////////////////////////////
    char toliqIsm[30];

    printf("To'liq ismingizni kiriting: \n");
    fgets(toliqIsm, sizeof(toliqIsm), stdin);

    printf("Salom %s", toliqIsm);
    ////////////////////////////////////////////

    ////////////////////////////////////////////

    return 0;
}
