/* 
Nama      : Claudia V.T. Panjaitan
NIM       : 41426004
Deskripsi : Memakai for untuk counting loop dengan jumlah ulangan yang diketahui
Tanggal   : 6 Oktober 2026
*/

#include <stdio.h>

int main () {
    int n, i;
    long long fakt = 1;

    printf("Masukkan n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        fakt *= i;
        printf("%d! = %lld\n", i, fakt);
    }
    printf("Jadi %d = %lld\n", n, fakt);
    return 0;
}