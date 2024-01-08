#include <stdio.h>

int main()
{

    // Misol 1 1D massivning elementlarini qo'shish
    int sonlar[] = {10, 20, 30, 40, 50};
    int yigindi = 0;
    int i;

    for (i = 0; i < 5; i++)
    {
        yigindi += sonlar[i];
    }

    printf("Elementlar yig'indisi: %d\n", yigindi);

    /// Misol 2 Massivning maksimal elementini topish

    int qiymatlar[] = {14, 28, 56, 102, 7, 40};
    int maksimum = qiymatlar[0]; // Birinchi element maksimum deb qabul qilinadi
    int i;

    for (i = 1; i < 6; i++)
    {
        if (qiymatlar[i] > maksimum)
        {
            maksimum = qiymatlar[i];
        }
    }

    printf("Maksimal element: %d\n", maksimum);

    /// Misol 3 2D massivni chiqarish

    int matrica[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", matrica[i][j]);
        }
        printf("\n");
    }

    /// Misol 4 Foydalanuvchi kiritgan ma'lumotlar bilan massivni boshlash

    int olcham, i;

    printf("Massiv o'lchamini kiriting: ");
    scanf("%d", &olcham);

    int foydalanuvchiMassivi[olcham];
    printf("%d element kiriting:\n", olcham);
    for (i = 0; i < olcham; i++)
    {
        scanf("%d", &foydalanuvchiMassivi[i]);
    }

    printf("Massivdagi elementlar:\n");
    for (i = 0; i < olcham; i++)
    {
        printf("%d ", foydalanuvchiMassivi[i]);
    }

    return 0;
}
