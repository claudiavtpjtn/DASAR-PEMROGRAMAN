/* 
Nama      : Claudia V.T. Panjaitan
NIM       : 41426004
Deskripsi :  Memperbaiki W-3 agar menolak masukan 0 atau negatif dengan pesan kesalahan
Tanggal   : 8 Oktober 2026
*/

#include <stdio.h>

int main () {
    int n, asli, digit, banyak = 0 , jumlah = 0, balik = 0;

    do {
        printf("Masukkan bilangan bulat positif: ");
        scanf("%d", &n);

        if (n <= 0) {
            printf("Bilangan harus lebih besar dari 0! Silakan coba lagi.\n\n");
        }
    } while (n <= 0);
    asli = n;

    while (n>0) {
        digit = n  % 10;        /ambil digit paling kanan/
        banyak++;
        jumlah += digit;
        balik = balik * 10 + digit;
        printf("n = %4d | digit = %d | balik = %d\n", n, digit, balik);
        n = n / 10;            /* buang digit paling kanan*/
    }

    printf("Bilangam %d: %d digit, jumlah digit = %d, dibalik = %d\n", asli, banyak, jumlah, balik);
    return 0;
}