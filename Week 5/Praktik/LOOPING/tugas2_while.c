/* 
Nama      : Claudia V.T. Panjaitan
NIM       : 41426004
Deskripsi : Mengubah W-2 agar juga menampilkan skor tertinggi dan terendah
Tanggal   : 8 Oktober 2026
*/


#include <stdio.h>
#define SENTINEL -99

int main () {
    int skor, jumlah = 0, banyak = 0;
    int tertinggi, terendah;        
    
    printf("Masukkan skor (%d untuk berhenti): ", SENTINEL);
    scanf("%d", &skor);             /baca data pertama/
    while (skor != SENTINEL) {
        if (banyak == 0) {          /data pertama jadi nilai awal/
            tertinggi = skor;
            terendah = skor;
        } else {
            if (skor > tertinggi)
                tertinggi = skor;
            if (skor < terendah)
                terendah = skor;
        }
        jumlah += skor;
        banyak++;
        printf("Masukkan skor berikutnya (%d untuk berhenti) : ", SENTINEL);
        scanf("%d", &skor);         /baca data berikutnya/
    }

    if (banyak > 0) {
        printf("Banyak data = %d, rata-rata = %.2f\n", banyak, (double)jumlah / banyak);
        printf("Skor tertinggi = %d\n", tertinggi);
        printf("Skor terendah  = %d\n", terendah);
    } else
        printf("Tidak ada data yang dimasukkan.\n");

    return 0;
}