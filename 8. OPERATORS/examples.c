#include <stdio.h>

int main() {
    int x = 5;
    // +=
    x += 3;
    printf("x after +=: %d\n", x); // Output: x after +=: 8
    // -=
    x -= 3;
    printf("x after -=: %d\n", x); // Output: x after -=: 5
    // *=
    x *= 3;
    printf("x after *=: %d\n", x); // Output: x after *=: 15
    // /=
    x /= 3;
    printf("x after /=: %d\n", x); // Output: x after /=: 5
    // %=
    x %= 3;
    printf("x after %%=: %d\n", x); // Output: x after %=: 
    // &=
    x &= 3;
    printf("x after &=: %d\n", x); // Output: x after &=: 2
    // |=
    x |= 3;
    printf("x after |=: %d\n", x); // Output: x after |=: 3
    // ^=
    x ^= 3;
    printf("x after ^=: %d\n", x); // Output: x after ^=: 0
    // >>=
    x = 16; // Reset x to 16 for shifting examples
    x >>= 3;
    printf("x after >>=: %d\n", x); // Output: x after >>=: 2
    // <<=
    x <<= 3;
    printf("x after <<=: %d\n", x); // Output: x after <<=: 16
    return 0;
}


