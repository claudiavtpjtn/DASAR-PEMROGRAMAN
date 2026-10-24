/* 
Nama      : Claudia V.T. Panjaitan
NIM       : 41426004
Deskripsi : Cetak bilangan 10 sampai 1 (hitung mundur) dengan decrement i--
Tanggal   : 8 Oktober 2026
*/

#include <stdio.h>
int main() {
    int i;

    printf("Hitung mundur:\n");
    for (i = 10; i >= 1; i--) {
        printf("%d\n", i);
    }

    printf("Selesai!\n");

    return 0;
}