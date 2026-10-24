/* 
Nama      : Claudia V.T. Panjaitan
NIM       : 41426004
Deskripsi : Menentukan bilangan terbesar dari 3 bilangan bulat via CLI.
Tanggal   : 29 September 2026
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 4) {
        printf("Penggunaan: %s   \n", argv[0]);
        return 1;
    }

    int a, b, c, max;
    a = atoi(argv[1]);
    b = atoi(argv[2]);
    c = atoi(argv[3]);

    max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }

    printf("Bilangan terbesar: %d\n", max);
    return 0;
}