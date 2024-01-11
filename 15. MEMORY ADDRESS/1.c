#include <stdio.h>

int main()
{

    // C tilida o'zgaruvchini yaratganingizda,
    // u kompyuter xotirasida o'z joyini oladi.
    // Bu joy ko'chadagi uy raqami kabi o'ziga xos manzilga ega.
    // Ushbu o'zgaruvchiga qiymat qo'yganingizda, u xotirada o'sha manzilda saqlanadi.

    // Ushbu o'zgaruvchining xotirada qaerda yashashini bilish uchun,
    // siz mos yozuvlar operatoridan (&) foydalanishingiz mumkin.
    // Bu ko'chadagi uyning manzilini qidirishga o'xshaydi -
    // bu o'zgaruvchining qayerda saqlanganligini aniq aytib beradi.

    int yosh = 43;
    printf("%p", &yosh); // Outputs 0x7ffe5367e044
    return 0;

    // Shuni ham ta'kidlash kerakki, &myAge ko'pincha "ko'rsatkich" deb ataladi. Ko'rsatkich asosan
    // o'zgaruvchining xotira manzilini uning qiymati sifatida saqlaydi.
    // Ko'rsatkich qiymatlarini chop etish uchun biz %p format spetsifikatsiyasidan foydalanamiz
}