/*
Nama    : Claudia V.T Panjaitan'
NIM     : 41426004
Prodi   : D IV TRPL
*/

#include <stdio.h>

 int main() {
    int i, j;

    for (i = 1; i <= 5; i++) {              /* loop luar: baris */
         for (j = 1; j <= 5; j++) {         /* loop dalam: kolom */
            printf("%4d", i * j);
        }
        printf("\n");
    }
    return 0;
 }
