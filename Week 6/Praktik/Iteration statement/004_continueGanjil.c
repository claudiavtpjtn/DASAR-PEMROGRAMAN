/*
Nama    : Claudia V.T Panjaitan'
NIM     : 41426004
Prodi   : D IV TRPL
*/

#include <stdio.h>

 int main() {
    int i, jumlah = 0;

    for (i = 1; i <= 10; i++) {
        if (i % 2 == 0)
            continue;               /* lewati bilangan genap */
        jumlah += i;
        printf("i = %2d (ganjil) -> jumlah = %d\n", i, jumlah);
    }
    printf("Jumlah bilangan ganjil 1..10 = %d\n", jumlah);
    return 0;
 }
