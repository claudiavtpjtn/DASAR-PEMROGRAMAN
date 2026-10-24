/* 
Nama      : Claudia V.T. Panjaitan
NIM       : 41426004
Deskripsi : Menentukan peringkat kredit nasabah (Jadwalkan / Gagal).
Tanggal   : 29 September 2026
*/

#include <stdio.h> 
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Penggunaan: %s  \n", argv[0]);
        return 1;
    }

    float pokok_utang;
    int masa_tunggak;
    pokok_utang = atof(argv[1]);
    masa_tunggak = atoi(argv[2]);
    
    if (pokok_utang <= 100) {
        if (masa_tunggak <= 6) {
            printf("Peringkat Utang anda Jadwalkan\n");
        } else {
            printf("Peringkat Utang anda di Gagalkan\n");
        }
    } else { 
        if (masa_tunggak <= 12) {
            printf("Peringkat Utang anda Jadwalkan\n");
        } else {
            printf("Peringkat Utang anda di Gagalkan\n");
        }
    }
    return 0;
}