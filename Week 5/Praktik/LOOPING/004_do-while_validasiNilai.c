/* 
Nama      : Claudia V.T. Panjaitan
NIM       : 41426004
Deskripsi : Menggunakan do-while sebagai input validatiom loop
Tanggal   : 6 Oktober 2026
*/

#include <stdio.h>

int main(){
    int nilai;

    do{
        printf("Masukkan nilai (0-100): ");
        scanf("%d", &nilai);
        if (nilai < 0 || nilai > 100)
            printf("Nilai tidak valid, silakan ulangi.\n");
    } while (nilai < 0 || nilai > 100);

    printf("Nilai diterima: %d\n", nilai);
    return 0;
}