#include <stdio.h>
#include <string.h>

int main()
{

    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%d", strlen(alphabet));

    /*
    Qatorlar bobida, biz sizeof funksiyasidan foydalanib, qatorning o'lchamini olishdik. sizeof va strlen farq qiladi, sizeof ham \0 belgisini hisobga oladi:
    */

    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%d", strlen(alphabet)); // 26
    printf("%d", sizeof(alphabet)); // 27

    char alphabet[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%d", strlen(alphabet)); // 26
    printf("%d", sizeof(alphabet)); // 50

    /*

    Qatorlarni bir-biriga qo'shish

    Ikki qatorni (qo'shib yuborish) bir-biriga qo'shish uchun strcat() funksiyasidan foydalanishingiz mumkin:
    */

    char str1[20] = "Salom ";
    char str2[] = "Dunyo!";

    // str2 ni str1 ga qo'shib yuboring (natija str1 da saqlanadi)
    strcat(str1, str2);

    // str1 ni chiqaring
    printf("%s", str1);

    /*
    Qatorlarni nusxalash

    Bir qatorning qiymatini boshqa bir qatorga nusxalash uchun strcpy() funksiyasidan foydalanishingiz mumkin:
    */

    char str1[20] = "Salom Dunyo!";
    char str2[20];

    // str1 ni str2 ga nusxalash
    strcpy(str2, str1);

    // str2 ni chiqaring
    printf("%s", str2);

    return 0;
}
