#include <stdio.h>

int main() {
    int a = 25;
    int b = 15;

    if (a > 18) {
        printf("a is greater than 18\n");
    }

    int x = 30;
    int y = 22;
    if (x > y) {
        printf("x is greater than y\n");

        if (x % 2 == 0) {
            printf("x is even\n");
        } else {
            printf("x is odd\n");
        }
    }

    return 0;
}
