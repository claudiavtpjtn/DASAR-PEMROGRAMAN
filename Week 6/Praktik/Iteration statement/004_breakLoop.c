/*
Nama    : Claudia V.T Panjaitan'
NIM     : 41426004
Prodi   : D IV TRPL
*/

#include <stdio.h>

 int main() {
    int i, j;

    printf("Contoh 1 (break pada loop tunggal):\n");
    for (i = 0; i < 5; i++) {
        if (i == 2) {
            break;
        }
        printf("%d\n", i);
    }

    printf("Contoh 2 (break pada nested loop):\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (j == 2)
                break;
            printf("%d\n", i + j);
        }
    }
    return 0;
 }
