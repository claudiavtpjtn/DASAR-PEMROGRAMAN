/* 
Nama      : Claudia V.T. Panjaitan
NIM       : 41426004
Deskripsi : Memasukkan PIN 4 digit sampai valid
Tanggal   : 8 Oktober 2026
*/

#include <stdio.h>
int main() {
    int pin;
    int hasil;

    do {
        printf("masukkan PIN 4 angka (1000-9999): ");
        hasil = scanf("%d", &pin);

        if (pin < 1000 || pin > 9999) {
            printf("PIN tidak valid coba lagi.\n\n");
        }
    } while (pin < 1000 || pin > 9999);

    printf("PIN valid, anda berhasil masuk.\n");
    return 0;
}