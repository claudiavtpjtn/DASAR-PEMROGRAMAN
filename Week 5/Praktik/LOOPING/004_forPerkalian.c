/* 
Nama      : Claudia V.T. Panjaitan
NIM       : 41426004
Deskripsi : Memakai for dengan batas tetap dan memformat keluaran agar rapi
Tanggal   : 6 Oktober 2026
*/

#include <stdio.h>

int main(){
    int n, i;

    printf("Tabel perkalian berapa?");
    scanf("%d", &n);

    for (i = 1; i <= 10; i++) {
        printf("%d x %2d = %3d\n", n, i, n * i);
    }
    return 0;
}