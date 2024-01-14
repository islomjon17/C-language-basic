#include <stdio.h>

int main() {

    int t = 22;
    if (t < 18) {
        printf("Hayrli kun.\n");
    } else {
        printf("Hayrli kech.\n");
    }

    int cond1 = 5;
    int cond2 = 10;
    int cond3 = 15;

    if (cond1 > cond2) {
        // cond1 to'g'ri bo'lganda bajariladigan koda bloki
    } else if (cond2 < cond3) {
        // cond1 to'g'ri bo'lmagan va cond2 to'g'ri bo'lganda bajariladigan koda bloki
    } else {
        // cond1 va cond2 ham to'g'ri bo'lmagan holda bajariladigan koda bloki
    }

    int code = 2468;

    if (code == 2468) {
        printf("To'g'ri kod.\nDarhol ochiq.\n");
    } else {
        printf("Noto'g'ri kod.\nDarvoza ochiq emas.\n");
    }

    int num = -5; // Sinov uchun sonni o'zgartiring

    if (num > 0) {
        printf("Qiymat musbat son.\n");
    } else if (num < 0) {
        printf("Qiymat manfiy son.\n");
    } else {
        printf("Qiymat 0.\n");
    }

    return 0;
}
