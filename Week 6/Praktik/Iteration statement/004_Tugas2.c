/*
Nama    : Claudia V.T Panjaitan'
NIM     : 41426004
Prodi   : D IV TRPL
*/

#include <stdio.h>

int main() {
    int i, j, prima;
    printf("Bilangan prima 2 sampai 50:\n ");
    for (i = 2; i <= 50; i++) {
        prima = 1;
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                prima = 0;
                break;
            }
        }
        if (prima) {
            printf("%d ", i);
        }
    }
    return 0;
}
