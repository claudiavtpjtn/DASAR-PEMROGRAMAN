/*
Nama    : Claudia V.T Panjaitan'
NIM     : 41426004
Prodi   : D IV TRPL
*/

#include <stdio.h>

int main()
{
    int i, j, n = 4;

    printf("\nPiramida:\n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
            printf(" ");
        for (j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }
{
        printf("Piramida Terbalik:\n");
    // Perubahan: Loop baris (i) bergerak mundur dari 'n' menuju 1
    for (i = n; i >= 1; i--) {
        
        // Loop spasi: Semakin ke bawah barisnya (i mengecil), spasi semakin banyak
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        
        // Loop bintang: Menghitung jumlah bintang ganjil dari yang terbesar hingga terkecil
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        
        // Pindah baris
        printf("\n");
    }

        printf("\nPiramida terbalik juga:\n");
        for (i = n; i >= 1; i--)
        {
            for (j = 1; j <= n - i; j++)
                printf(" ");
            for (j = 1; j <= 2 * i - 1; j++)
                printf("*");
            printf("\n");
        }
    }
    return 0;
}
