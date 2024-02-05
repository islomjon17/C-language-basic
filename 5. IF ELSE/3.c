#include <stdio.h>

int main() {

    int vaqt = 20;


    if (vaqt < 12) {
        printf("Ertalab.\n");
    } else if (vaqt < 18) {
        printf("Kunduzi\n");
    } else {
        printf("Kechqurun.\n");
    }


//////////////////////////////////////// 2


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



    return 0;
}
