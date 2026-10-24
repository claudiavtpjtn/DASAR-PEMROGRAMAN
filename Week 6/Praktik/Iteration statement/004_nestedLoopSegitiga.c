/*
Nama    : Claudia V.T Panjaitan'
NIM     : 41426004
Prodi   : D IV TRPL
*/

#include <stdio.h>

int main(){
    int i, j, n = 4;

    printf("Segitiga:\n");
    for (i = 1; i <= n; i++) {      /*i= baris, j= kolom*/
        for (j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }

    printf("\nPiramida:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++)
            printf(" ");
        for (j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}