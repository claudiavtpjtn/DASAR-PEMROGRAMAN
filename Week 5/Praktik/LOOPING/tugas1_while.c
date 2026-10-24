/* 
Nama      : Claudia V.T. Panjaitan
NIM       : 41426004
Deskripsi : Mencetak bilangan kelipatan 3 dari 3 sampai 30 memakai while
Tanggal   : 6 Oktober 2026
*/

#include <stdio.h>

int main() {
    int i;
    printf(" Kelipatan 3 \n");
    i = 1;
    while (i <= 10) {
        printf("%d", i * 3);
        if (i < 10) printf(", ");
        i++;
    }
        return 0;
}