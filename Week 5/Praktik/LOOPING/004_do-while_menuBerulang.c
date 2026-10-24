/* 
Nama      : Claudia V.T. Panjaitan
NIM       : 41426004
Deskripsi : Membuat program menu yang terus tampil sampai pengguna memilih keluar
Tanggal   : 6 Oktober 2026
*/

#include <stdio.h>

int main () {
    int pilihan;
    double a, b;

    do{
        printf("\n === MENU KALKULATOR ===\n");
        printf("1. Tambah\n2. Kurang\n3. Keluar\npilihan: ");
        scanf("%d", &pilihan);

        if (pilihan ==1 || pilihan ==2) {
            printf("Masukkan dua bilangan: ");
            scanf("%lf %lf", &a, &b);
            if (pilihan == 1)
                printf("Hasil: %.2f\n", a + b);
            else
                printf("Hasil: %.2f\n", a - b);
        } else if (pilihan !=3) {
                printf("Pilihan tidak dikenal.\n");
        }
        } while (pilihan !=3);

        printf("Program selesai.\n");
        return 0;
    }