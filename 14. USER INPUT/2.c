#include <stdio.h>

int main(){
    
    // Bo'shliq bilan kiritish
    ////////////////////////////////////////////
    char toliqIsm[30];

    // printf("To'liq ismingizni kiriting: \n");
    fgets(toliqIsm, sizeof(toliqIsm), stdin);

    printf("Salom %s", toliqIsm);
    ////////////////////////////////////////////

    ////////////////////////////////////////////

}