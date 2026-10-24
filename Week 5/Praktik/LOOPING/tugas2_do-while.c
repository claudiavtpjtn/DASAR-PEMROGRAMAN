/* 
Nama      : Claudia V.T. Panjaitan
NIM       : 41426004
Deskripsi : Menambahkan operasi kali dan bagi pada D-3, serta tolak pembagian dengan nol 
Tanggal   : 8 Oktober 2026
*/

#include <stdio.h>

int main()
{
    int pilihan;
    double a, b;

    do
    {
        printf("\n=== MENU KALKULATOR ===\n");
        printf("1. Tambah.\n2. Kurang.\n3. Perkalian.\n4. Pembagian.\n5. Keluar\nPilihan: ");
        scanf("%d", &pilihan);

        if (pilihan == 1 || pilihan == 2 || pilihan == 3 || pilihan == 4)
        {
            printf("Masukkan dua bilangan: ");
            scanf("%lf %lf", &a, &b);
            if (pilihan == 1)
                printf("Hasil: %.2f\n", a + b);
            else if (pilihan == 2)
                printf("Hasil: %.2f\n", a - b);
            else if (pilihan == 3)
                printf("Hasil: %.2f\n", a * b);
            else if (pilihan == 4)
                printf("Hasil: %.2f\n", a / b);
        }
        else 
        {
            printf("Pilihan tidak dikenal.\n");
        }
    } while (pilihan != 5);

    printf("Program selesai.\n");

    return 0;
}