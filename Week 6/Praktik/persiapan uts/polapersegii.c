#include <stdio.h>

int main() {
    // Ukuran ditentukan langsung di sini (bisa Anda ubah angkanya jika mau)
    int ukuran = 7; 

    printf("Hasil Pola Persegi dengan Huruf X di Dalamnya (Ukuran = %d):\n\n", ukuran);
    // Loop untuk baris (i)
    for (int i = 1; i <= ukuran; i++) {
        // Loop untuk kolom (j)
        for (int j = 1; j <= ukuran; j++) { 
            // Kondisi untuk mencetak pinggiran persegi
            if (i == 1 || i == ukuran || j == 1 || j == ukuran) {
                printf("* ");
            }
            // Kondisi untuk mencetak diagonal utama (kiri atas ke kanan bawah)
            else if (i == j) {
                printf("* ");
            }
            // Kondisi untuk mencetak diagonal sekunder (kanan atas ke kiri bawah)
            else if (i + j == ukuran + 1) {
                printf("* ");
            }
            // Jika tidak memenuhi kondisi di atas, cetak spasi kosong
            else {
                printf("  "); 
            }
        }
        // Pindah ke baris baru
        printf("\n");
    }

    return 0;
}
