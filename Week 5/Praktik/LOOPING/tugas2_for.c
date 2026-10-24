/* 
Nama      : Claudia V.T. Panjaitan
NIM       : 41426004
Deskripsi : Menghitung jumlah dan rata-rata N bilangan yang dimasukkan pengguna
Tanggal   : 8 Oktober 2026
*/

#include <stdio.h>

int main() {
    int n, i;
    int total = 0;
    float rata;

    printf("Tabel perkalian berapa? ");
    scanf("%d", &n);

    for (i = 1; i <= 10; i++) {
        printf("%d x %2d = %3d\n", n, i, n * i);
        total = total + (n * i);
    }

    rata = total / 10.0;

    printf("\nTotal semua hasil = %d\n", total);
    printf("Rata-rata         = %.2f\n", rata);

    return 0;
}