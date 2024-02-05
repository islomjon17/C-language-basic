#include <stdio.h>


int main(){

        // undosh harf ekanligini bilish
    char ch;
    printf("harf kirit");
    scanf("%c", &ch);
    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c - undosh harf.\n", ch);
            break;
        default:
            printf("%c - undosh harf emas.\n", ch);
            break;
    }
    return 0;
}