/*
Nama      : Claudia V.T. Panjaitan
NIM       : 41426004
Deskripsi : Menentukan bilangan ganjil atau genap dari command line argument
Tanggal   : 29 September 2026
*/

#include <stdio.h> 
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Masukkan bilangan bulat: %s \n", argv[1]);
        return 1;
    }

    int x = atoi(argv[1]);

    if (x % 2 == 0) {
        printf("%d adalah bilangan genap\n", x);
    } else {
        printf("%d adalah bilangan ganjil\n", x);
    }

    return 0;
}
