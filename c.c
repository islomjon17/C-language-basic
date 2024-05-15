#include <stdio.h>
#include <math.h>
int main(){
///1
    // int P,n;
    // printf("Kvadratning tomonini kiriting>>> ");
    // scanf("%d", &n);
    // P = 4*n;
    // printf("P = %d", P);

///2

// int a,S;
// printf("Kvadratning tomonini kiriting>>> ", a);
// scanf("%d", &a);

// S = pow(a, 2);
// printf("S = %d", S);


///3

// int a,b,S,P;
// printf("Tortburchakning a tomonini kiriting>> ");
// scanf("%d", &a);
// printf("Tortburchakning b tomonini kiriting>> ");
// scanf("%d", &b);

// S = a * b;
// P = 2*(a+b);
// printf("Yuzasi %d, Peremetiri>> %d", S,P);


///4

    // int d;
    // float L, p;
    // p = 3.14;
    // printf("d uchun qiymat kiriting>> ");
    // scanf("%d", &d);
    // L = p * d;
    // printf("L ning qiymati %f ", L);
    // return 0;




///5

// int a, V, S;
// printf("a uchun qiymat kiriting>> ");
// scanf("%d", &a);
// V = pow(a,3);
// S=6*pow(a,2);
// printf("V = %d, S = %d", V,S);




///6

// int S,V,a,b,c;
// printf("a uchun qiymat kiriting>> ");
// scanf("%d", &a);
// printf("b uchun qiymat kiriting>> ");
// scanf("%d", &b);
// printf("c uchun qiymat kiriting>> ");
// scanf("%d", &c);
// S = 2*(a*b+b*c+a*c);
// V = a*b*c;
// printf("%d, %d ", S,V);


///7

//    float L, S, R, pi;
//     printf("r uchun qiymat kiriting>> ");
//     scanf("%f", &R);
//     pi = 3.14;
//     L = 2 * pi * R;  // Circumference of a circle
//     S = pi * pow(R, 2); // Area of a circle, R^2, not R^R
//     printf("L: %f, S: %f\n", L, S);


///8

// int a,b,oa;
// printf("a uchun qiymat kiriting>> ");
// scanf("%d",&a);
// printf("b uchun qiymat kiriting>> ");
// scanf("%d",&b);
// oa = (a+b)/2;
// printf("%d", oa);





///9
// double num1, num2, geometric_mean;
// printf("Enter the first non-zero number: ");
// scanf("%lf", &num1);
// printf("Enter the second non-zero number: ");
// scanf("%lf", &num2);
// if (num1 == 0 || num2 == 0) {
//     printf("Both numbers must be non-zero.\n");
//     return 1;
// }
// geometric_mean = sqrt(num1 * num2);
// printf("The geometric mean of %lf and %lf is %lf\n", num1, num2, geometric_mean);

    



///10
// double num1, num2, yeg, kop, num1_pow, num2_pow;
// printf("Enter the first non-zero number: ");
// scanf("%lf", &num1);
// printf("Enter the second non-zero number: ");
// scanf("%lf", &num2);
// if (num1 == 0 || num2 == 0) {
//     printf("Both numbers must be non-zero.\n");
//     return 1;
// }
// yeg = num1+num2;
// kop = num1*num2;
// num1_pow = pow(num1,2);
// num2_pow = pow(num2,2);
// printf("%lf,%lf,%lf,%lf ", yeg, kop, num1_pow, num2_pow);


// 11
// double num1, num2, sum, product, modulus1, modulus2;

//     printf("Enter the first non-zero number: ");
//     scanf("%lf", &num1);
//     printf("Enter the second non-zero number: ");
//     scanf("%lf", &num2);

//     if (num1 == 0 || num2 == 0) {
//         printf("Both numbers must be non-zero.\n");
//         return 1;
//     }
//     sum = num1 + num2;
//     product = num1 * num2;
//     modulus1 = fabs(num1);
//     modulus2 = fabs(num2);
//     printf("The sum of %lf and %lf is %lf\n", num1, num2, sum);
//     printf("The product of %lf and %lf is %lf\n", num1, num2, product);
//     printf("The modulus of %lf is %lf\n", num1, modulus1);
//     printf("The modulus of %lf is %lf\n", num2, modulus2);



// 12

// int a,b, c,P;
// printf("a uchun qiymat kiriting>> ");
// scanf("%d", &a);
// printf("b uchun qiymat kiriting>> ");
// scanf("%d", &b);
// c = sqrt(pow(a,2)+pow(b,2));
// P = a + b + c;
// printf("c=%d, P=%d", c, P);


// 13
// int r1, r2;
// float pi, s1, s2, s3;
// pi = 3.14;
// printf("r1 va r2 uchun qiymat kiriting(r1, r2dan katta bo'lishi kerak: ):>> ");
// scanf("%d", &r1);
// printf("r2 uchun:>> ");
// scanf("%d", &r2);
// if (r1<r2){
//     printf("r1, r2 dan kichkina: Qaytadan sinab ko'ring.");
// }
// else {
//     s1 = pi*r1;
//     s2 = pi*r2;
//     s3 = pi*(r1-r2);
//     printf("S1 = %f, S2 = %f, S3 = %f", s1, s2, s3);
// }

// ----------------------------------------------------------------
// 14
#define PI 3.14159265358979323846

// double L, R, S;
// printf("Enter the circumference of the circle: ");
// scanf("%lf", &L);
// R = L / (2 * PI);
// S = PI * R * R;
// printf("Radius of the circle (R): %.2lf\n", R);
// printf("Area of the circle (S): %.2lf\n", S);

// 15
// double L, R, D, S;
// printf("Enter the circumference of the circle: ");
// scanf("%lf", &L);
// R = L / (2 * PI);
// D = 2 * R;
// S = PI * R * R;
// printf("Radius of the circle (R): %.2lf\n", R);
// printf("Diameter of the circle (D): %.2lf\n", D);
// printf("Area of the circle (S): %.2lf\n", S);



// 16

// double x1,x2, distance;
// x1 = printf("x1 uchun qiymat kiriting:>>> ");
// scanf("%lf", &x1);
// x2 = printf("x2 uchun qiymat kiriting:>>> ");
// scanf("%lf", &x2);
// distance = fabs(x1 - x2);
// printf("Distance %lf", distance);


// 17
// double A,B,C, AC, BC,  ABC;
// A = printf("A uchun qiymat kiriting:>>> ");
// scanf("%lf", &A);
// B = printf("B uchun qiymat kiriting:>>> ");
// scanf("%lf", &B);
// C = printf("C uchun qiymat kiriting:>>> ");
// scanf("%lf", &C);
// AC = fabs(A - C);
// BC = fabs(B - C);
// ABC = AC + BC;
// printf("%lf, %lf, %lf", AC, BC, ABC);






// 18
    int A[2] = {0, 0};     // Point A at (0, 0)
    int B[2] = {10, 0};    // Point B at (d, 0) with d = 10 (replace with your actual value)
    int C[2] = {6, 0};     // Point C at (x, 0) with x = 6 (replace with your actual value)

    int x_A = A[0];
    int x_B = B[0];
    int x_C = C[0];

    int AC = abs(x_C - x_A);
    int BC = abs(x_B - x_C);

    int product = AC * BC;

    printf("The product of the lengths of segments AC and BC is: %d\n", product);



//



//



//



//



//



//



//



//



//



//



//



//



//



//



//



//



//



//



//



//



//



//



//



//



//







}