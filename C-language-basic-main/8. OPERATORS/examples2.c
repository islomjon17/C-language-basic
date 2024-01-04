#include <stdio.h>

int main() {
    int x = 5;
    int y = 10;
    // ==
    printf("x == y: %d\n", x == y); // Output: x == y: 0 (False)
    // !=
    printf("x != y: %d\n", x != y); // Output: x != y: 1 (True)
    // >
    printf("x > y: %d\n", x > y); // Output: x > y: 0 (False)
    // <
    printf("x < y: %d\n", x < y); // Output: x < y: 1 (True)
    // >=
    printf("x >= y: %d\n", x >= y); // Output: x >= y: 0 (False)
    // <=
    printf("x <= y: %d\n", x <= y); // Output: x <= y: 1 (True)
    return 0;
}
