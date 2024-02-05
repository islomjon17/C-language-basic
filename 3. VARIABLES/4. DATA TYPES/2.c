#include <stdio.h>

int main()
{
    /*

    Asosiy ma'lumotlar turlari:

       int: Butun qiymatlarni saqlash uchun ishlatiladi.
       float: suzuvchi nuqtali raqamlarni (o'nlik raqamlar) saqlash uchun ishlatiladi.
       double: floatga o'xshaydi, lekin yuqori aniqlikda.
       char: bitta belgini saqlash uchun ishlatiladi.

    */

    int age = 25;
    float price = 19.99;
    double pi = 3.1415926535;
    char grade = 'A';

    ////////////////

    /*
    Turni o'zgartiruvchilar:

        short: o'zgaruvchi ushlab turishi mumkin bo'lgan qiymatlar oralig'ini qisqartiradi.
        long: o'zgaruvchi ushlab turishi mumkin bo'lgan qiymatlar oralig'ini oshiradi.
        signed: o'zgaruvchiga ijobiy va salbiy qiymatlarni saqlashga ruxsat beradi (int uchun standart).
        unsigned: o'zgaruvchiga faqat salbiy bo'lmagan qiymatlarni saqlashga ruxsat beradi.

    */

    short smallNumber = 32767;
    long bigNumber = 2147483647L;
    unsigned int positiveNumber = 42;
}
