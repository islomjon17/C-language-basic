#include <stdio.h>

void myFunction()
{
    printf("Men faqat bajarildim!");
}

int asosiy()
{
    myFunction(); // funksiyani chaqirish
    return 0;
}

/*
void myFunction() { // bayonnoma
  // funksiya (tavsif)
}
*/
/////////////////////////////////////
// Funksiya bayonnoma
void myFunction();

// Asosiy usul
int main()
{
    myFunction(); // funksiyani chaqirish
    return 0;
}
/////////////////////////////////////
// Funksiya tavsifi
// void myFunction()
// {
//     printf("Men faqat bajarildim!");
// }

// int myFunction(int x, int y)
// {
//     return x + y;
// }

// int main()
// {
//     int natija = myFunction(5, 3);
//     printf("Natija = %d", natija);
//     return 0;
// }

/////////////////////////////////////

// Funksiya bayonnoma
// int myFunction(int, int);

// // Asosiy usul
// int main()
// {
//     int natija = myFunction(5, 3); // funksiyani chaqirish
//     printf("Natija = %d", natija);
//     return 0;
// }

// // Funksiya tavsifi
// int myFunction(int x, int y)
// {
//     return x + y;
// }
