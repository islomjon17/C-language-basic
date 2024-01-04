#include <stdio.h>

int main() {
    int x = 6;

    // &&
    printf("(x < 5 && x < 10): %d\n", (x < 5 && x < 10)); // Output: (x < 5 && x < 10): 0 (False)

    // ||
    printf("(x < 5 || x < 4): %d\n", (x < 5 || x < 4)); // Output: (x < 5 || x < 4): 1 (True)

    // !
    printf("!(x < 5 && x < 10): %d\n", !(x < 5 && x < 10)); // Output: !(x < 5 && x < 10): 1 (True)

    return 0;
}
