#include <stdio.h>

int main() {
    int a = 25;
    int b = 15;

    if (a > 18) {
        printf("a 18 dan katta\n");
    }
/// nested if (if ichida if)
    int x = 30;
    int y = 22;
    if (x > y) {
        printf("x y dan katta\n");

        if (x % 2 == 0) {
            printf("x juft son\n");
        } else {
            printf("x toq son\n");
        }
    }

    return 0;
}
