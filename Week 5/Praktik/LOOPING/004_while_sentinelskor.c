/* 
Nama      : Claudia V.T. Panjaitan
NIM       : 41426004
Deskripsi : Menggunakan nilai sentinel (-99) untuk mengakhiri input yang jumlahnya tidak diketahui
Tanggal   : 6 Oktober 2026
*/

#include <stdio.h>
#define SENTINEL -99

int main(){
    int skor, jumlah = 0, banyak = 0;

    printf("Masukkan skor(%d untuk  berhenti): ", SENTINEL);
    scanf("%d", &skor);                 /*baca data pertama*/
    while (skor != SENTINEL) { 
        jumlah += skor;
        banyak++;
        printf("Masukkan skor berikutnya (%d untuk berhenti): ", SENTINEL);
        scanf("%d", &skor);             /*baca data berikutnya*/
    }

    if (banyak > 0)
        printf("banyak data = %d, jumlah =  %d, rata rata = %.2f\n",
                banyak, jumlah, (double) jumlah/banyak);
    else
        printf("Tidak aad data yang dimasukkan.\n");
    return 0;
}