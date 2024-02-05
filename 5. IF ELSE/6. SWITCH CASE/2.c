#include <stdio.h>

int main(){
    // Bugun haftaning 4-kuni (payshanba) deb hisoblangan
    int kun = 4;

    // Kunni aniqlash va shu bo'yicha xabar chiqarish uchun switch-operatoridan foydalanish
    switch (kun) {
        case 6:
            // Agar kun 6-bo'lsa (shanba)
            printf("Bugun Shanba");
            break;
        case 7:
            // Agar kun 7-bo'lsa (yakshanba)
            printf("Bugun Yakshanba");
            break;
        default:
            // Boshqa kunlar uchun umumiy xabar chiqarish
            printf("Weekendga kutib olish");
    }

    // "Weekendga kutib olish" deb chiqaradi, bugungi kunni (4) hisoblab bo'lingan holda

    return 0;
}
