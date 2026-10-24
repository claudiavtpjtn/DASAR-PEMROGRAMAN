/* 
Nama      : Claudia V.T. Panjaitan
NIM       : 41426004
Deskripsi : Menentukan wujud air (padat, cair, gas) berdasarkan suhu masukan CLI.
Tanggal   : 29 September 2026
*/

#include <stdio.h> 
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Penggunaan: %s \n", argv[0]);
        return 1;
    }

    float x;
    x = atof(argv[1]);

    if (x < 0) {
        printf("padat\n");
    } else if (x >= 0 && x <= 100) {
        printf("cair\n");
    } else {
        printf("gas\n");
    }

    return 0;
}