/*
Nama      : Claudia V.T. Panjaitan
NIM       : 41426004
Deskripsi : Menentukan grade nilai berdasarkan input float dari command line argument
Tanggal   : 29 September 2026
*/

#include <stdio.h> 
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Gunakan: %s \n", argv[0]);
        return 1;
    }
    float x = atof(argv[1]);
    char ch;
    if (x > 80) {
        ch = 'A';
    } else if (x >= 65) {
        ch = 'B';
    } else if (x >= 50) {
        ch = 'C';
    } else if (x >= 35) {
        ch = 'D';
    } else {
        ch = 'E';
    }
    printf("Anda mendapatkan grade %c\n", ch);
    return 0;
}