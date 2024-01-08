#include <stdio.h>

int main()
{
    int i;
    for (i = 0; i <= 10; i = i + 2)
    {
        printf("%d\n", i);
    }

    /*
    For tsiklining yana bir amaliy misolini ko'rsatish
    uchun ma'lum son uchun ko'paytirish jadvalini chop etuvchi dastur yarataylik:
    */
    int num = 2;

    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    // Teskari sanoq uchun

    int i;
    for (i = 10; i >= 1; i--)
    {
        printf("%d\n", i);
    }
    return 0;
}
