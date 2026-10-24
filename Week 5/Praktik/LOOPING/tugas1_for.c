/* 
Nama      : Claudia V.T. Panjaitan
NIM       : 41426004
Deskripsi : Deret fibonacci 10 suku pertama
Tanggal   : 8 Oktober 2026
*/

#include <stdio.h>

int main(void) {
    int a = 0, b = 1, berikutnya;
    int i;

    printf("10 suku pertama deret Fibonacci:\n");

    for (i = 1; i <= 10; i++) {
        printf("%d ", a);

        berikutnya = a + b;
        a = b;
        b = berikutnya;
    }

    printf("\n");

    return 0;
}