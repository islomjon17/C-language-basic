#include <stdio.h>

int main() {
///////////////////////////////////////////// 1


    int tanlov;

    printf("Raqam kirit (1-3): ");
    scanf("%d", &tanlov);

    switch(tanlov) {
        case 1:
            printf("Siz 1 tanladiz.\n");
            break;
        case 2:
            printf("Siz 2 tanladiz.\n");
            break;
        case 3:
            printf("Siz 3 tanladiz.\n");
            break;
        default:
            printf("Xato raqam.\n");
    }










//////////////////////////////////////////// 2    
    int kun;
    printf("Haftaning kunini kiriting (1-7): ");
    scanf("%d", &kun);

    switch (kun) {
        case 1:
            printf("Dushanba\n");
            break;
        case 2:
            printf("Seshanba\n");
            break;
        case 3:
            printf("Chorshanba\n");
            break;
        case 4:
            printf("Payshanba\n");
            break;
        case 5:
            printf("Juma\n");
            break;
        case 6:
            printf("Shanba\n");
            break;
        case 7:
            printf("Yakshanba\n");
            break;
        default:
            printf("Noto'g'ri kun\n");
            break;
    }

    return 0;
}
