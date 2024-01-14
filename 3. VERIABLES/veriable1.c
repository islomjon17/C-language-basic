#include <stdio.h>

int main() {
    // Butun o'zgaruvchini e'lon qiling va ishga tushiring
    int myNum = 15;
    printf("%d\n", myNum);
    // O'zgaruvchini e'lon qilish
    int myNum2;
    int Mynum2;
 
    // O'zgaruvchiga qiymat belgilash
    myNum2 = 15;
    Mynum2 = 16;
    printf("Hello World!\n  %d, %d", myNum2, Mynum2);
    // myNum qiymatini chop eting (noto'g'ri format aniqlagichi tufayli hech narsa sodir bo'lmaydi)
    printf(myNum);  // Hech narsa bo'lmaydi

    // MyNum qiymatini toʻgʻri format spetsifikatoridan foydalanib chop eting (butun sonlar uchun %d)
    printf("%d\n", myNum);  // Natija 15












    // // Har xil turdagi o'zgaruvchilar yarating va ularning qiymatlarini chop eting
int myIntNum = 15;            // Butun son
float myFloatNum = 5.99;      // O'ngli son
char myLetter = 'D';          // Harf

printf("%d\n", myIntNum);     // Butun sonni chiqarish
printf("%f\n", myFloatNum);   // O'ngli sonni chiqarish
printf("%c\n", myLetter);     // Harfini chiqarish

int myNum = 15;
int myLetter = 'D'; 
// Xabarni myNum qiymati bilan birga chiqarish
printf("Sevimli sonim: %d\n", myNum);

// Xabarni myNum va myLetter qiymatlari bilan birga chiqarish
printf("Mening sonim %d va mening harfim %c\n", myNum,  myLetter);

// myNum qiymatini o'zgartirish
myNum = 10;  // Endi myNum 10

// myOtherNum (23) qiymatini myNum ga berish
int myOtherNum = 23;
myNum = myOtherNum; // myNum endi 15 bo'lishiga qaramasdan 23
printf("%d\n", myNum);

// O'zgaruvchilar orasida qiymat berish
int x = 5, y = 6, z = 50;
printf("%d\n", x + y + z);

// Bir xil qiymatni ko'p o'zgaruvchilarga berish
int a, b, c;
a = b = c = 50;
printf("%d\n", a + b + c);

// Yaxshi o'zgaruvchi nomlash uslubi
int minutesPerHour = 60;

// Kam ta'rifli o'zgaruvchi nomlash
int m = 60;

return 0;
}
