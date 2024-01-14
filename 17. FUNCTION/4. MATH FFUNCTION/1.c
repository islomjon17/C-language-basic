#include <stdio.h>

// import math
#include <math.h>
int main()
{
    /*

    // abs(x) 	- x ning absolut qiymatini qaytaradi
    // acos(x) 	- x ning arkkosinusi (kosinusi balandlik) qiymatini qaytaradi
    // asin(x) 	- x ning arksinus (sinusi balandlik) qiymatini qaytaradi
    // atan(x) 	- x ning arktanjenti (tanjenti balandlik) qiymatini qaytaradi
    // cbrt(x) 	- x ning kub ildizini qaytaradi
    // cos(x) 	- x ning kosinusini qaytaradi
    // exp(x) 	- Ex ning qiymatini qaytaradi
    // sin(x) 	- x ning sinusini qaytaradi (x radian cinsida bo'ladi)
    // tan(x) 	- burchakning tangensini qaytaradi

    */
    ///////////

    // abs(x) - Modul qiymati
    int x = -10;
    int natija = abs(x);
    printf("%d sonining moduli %d ga teng\n", x, natija);

    ///////////
    // acos(x) - Arkkosinus
    double x = 0.5;
    double natija = acos(x);
    printf("%.2f sonining arkkosinusi %.2f radian ga teng\n", x, natija);
    ///////////
    // asin(x) - Arksinus
    double x = 0.5;
    double natija = asin(x);
    printf("%.2f sonining arksinusi %.2f radian ga teng\n", x, natija);
    ///////////
    // atan(x) - Arktanjent
    double x = 0.5;
    double natija = atan(x);
    printf("%.2f sonining arktanjenti %.2f radian ga teng\n", x, natija);
    ///////////
    // cbrt(x) - Kub ildizi
    double x = 27.0;
    double natija = cbrt(x);
    printf("%.2f sonining kub ildizi %.2f ga teng\n", x, natija);
    ///////////
    // cos(x) - Kosinus
    double x = 1.0;
    double natija = cos(x);
    printf("%.2f sonining kosinusi %.2f ga teng\n", x, natija);
    ///////////
    // exp(x) - Eksponenta funktsiyasi
    double x = 2.0;
    double natija = exp(x);
    printf("E ning %.2f darajasi %.2f ga teng\n", x, natija);
    ///////////
    // sin(x) - Sinus
    double x = 1.0;
    double natija = sin(x);
    printf("%.2f sonining sinus %.2f ga teng\n", x, natija);
    ///////////
    // tan(x) - Tangens
    double x = 45.0; // gradusda
    double radian = x * 3.14 / 180.0;
    double natija = tan(radian);
    printf("%.2f gradusning tangensi %.2f ga teng\n", x, natija);
    return 0;
}