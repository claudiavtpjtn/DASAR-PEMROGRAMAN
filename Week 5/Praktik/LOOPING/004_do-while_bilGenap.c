/* 
Nama      : Claudia V.T. Panjaitan
NIM       : 41426004
Deskripsi : Memahami bahwa do-while mengulang selama kondisi true, dan menghitung jumlah percobaan
Tanggal   : 6 Oktober 2026
*/

#include <stdio.h>

int main(){
    int num, percobaan = 0;

    do{
        printf("Masukkan bilangan genap: ");
        scanf("%d", &num);
        percobaan++;
    } while (num % 2 != 0);

    printf("Bilangan genap %d diterima setelah %d percobaan. \n", num,
    percobaan);
    return 0;
}