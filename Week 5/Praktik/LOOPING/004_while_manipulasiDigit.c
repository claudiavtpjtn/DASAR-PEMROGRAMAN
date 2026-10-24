/* 
Nama      : Claudia V.T. Panjaitan
NIM       : 41426004
Deskripsi : Memakai while dengan kondisi umum (bukan hitungan atau sentinel) untuk memproses digit bilangan
Tanggal   : 6 Oktober 2026
*/

#include <stdio.h>

int main() {
    int n, asli, digit, banyak = 0, jumlah = 0, balik = 0;
    
    printf("Masukkan bilangan bulat positif: ");
    scanf("%d", &n);
    asli = n;

    while (n > 0) {
        digit = n % 10;             /* ambil digit paling kanan */
        banyak++;
        jumlah += digit;
        balik = balik * 10 + digit;
        printf("n = %4d | digit = %d | balik = %d\n", n, digit, balik);
        n = n / 10;                   /* buang digit paling kanan */
    }
    printf("Bilangan %d: %d digit, jumlah digit = %d, dibalik = %d\n",
            asli, banyak, jumlah, balik);
    return 0;
}