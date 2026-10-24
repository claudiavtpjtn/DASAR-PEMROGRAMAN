/* 
Nama      : Claudia V.T. Panjaitan
NIM       : 41426004
Deskripsi : Memahami tiga unsur counter-controlled loop pada while
Tanggal   : 6 Oktober 2026
*/

#include <stdio.h>

int main(void) {
    int n, i = 1, jumlah = 0; 

    printf("Masukkan N: "); 
    scanf("%d", &n); 

    while (i <= n) { 
        jumlah += i;
        printf("i = %d, jumlah sementara = %d\n", i, jumlah);
        i++;
 }
 printf("Jumlah 1 sampai %d = %d\n", n, jumlah);
 return 0;
}