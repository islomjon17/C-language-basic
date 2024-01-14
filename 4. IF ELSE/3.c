#include <stdio.h>

int main() {

    int currentTime = 20;

    // Vaqtni tekshirib, ertalab, kunorta yoki kechqurun ekanligini aniqlash
    if (currentTime < 12) {
        printf("Xayrli tong.\n");
    } else if (currentTime < 18) {
        printf("Xayrli kunorta.\n");
    } else {
        printf("Xayrli kechqurun.\n");
    }

    // Sonning juft yoki toq ekanligini tekshirish uchun ternary operatoridan foydalanish
    int number = 27;
    (number % 2 == 0) ? printf("Son juft.\n") : printf("Son toq.\n");

    // Berilgan yilning kabisa yili yoki emasligini tekshirish
    int year = 2024;
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d - kabisa yili.\n", year);
    } else {
        printf("%d - kabisa yili emas.\n", year);
    }

    // Harfin so'zga yoki undan tashqari harf ekanligini tekshirish
    char ch = 'e';
    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c - undosh harf.\n", ch);
            break;
        default:
            printf("%c - undosh harf emas.\n", ch);
            break;
    }

    return 0;
}
