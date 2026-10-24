/* 
Nama      : Claudia V.T. Panjaitan
NIM       : 41426004
Deskripsi : Menentukan bilangan terbesar dari 2 bilangan bulat via CLI.
Tanggal   : 29 September 2026
*/

#include <stdio.h> 
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Penggunaan: %s  \n", argv[0]);
        return 1;
    }

    int a, b, max;

    a = atoi(argv[1]);
    b = atoi(argv[2]);

    if (a >= b) {
        max = a;
    } else {
        max = b;
    }

    printf("Bilangan terbesar: %d\n", max);

    return 0;
}