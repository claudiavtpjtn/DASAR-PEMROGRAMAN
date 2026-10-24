/* 
Nama      : Claudia V.T. Panjaitan
NIM       : 41426004
Deskripsi : 
Tanggal   : 8 Oktober 2026
*/

#include <stdio.h>

int main () {
    int angka_rahasia = 42;
    int percobaan = 0;
    int tebakan;

    printf("===System Accsess Lock!!!===\n");
    printf("Masukkan Kode PIN Dari Angka (1-100)\n");
    printf("Masukkkan Kode PIN!\n");

    do {
        printf("Masukkan angka tebakan: ");
        scanf("%d", &tebakan);
        percobaan++;

        if (tebakan <  angka_rahasia) {
            printf("Terlalu Kecil! Coba Angka Lain yang Lebih Besar!!!\n");
        } else if (tebakan > angka_rahasia) {
            printf("Terlalu Besar! Coba Angka Lain yang Lebih Kecil!!!\n");
        }

    } while (tebakan != angka_rahasia);

    printf("PIN benar! Akses Diterima\n");
    printf("Kamu Berhasil Menebak dalam %d Kali Percobaan\n", percobaan);

    return 0;
}