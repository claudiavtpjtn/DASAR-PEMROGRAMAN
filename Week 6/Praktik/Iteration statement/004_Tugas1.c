/*
Nama    : Claudia V.T Panjaitan'
NIM     : 41426004
Prodi   : D IV TRPL
*/

#include <stdio.h>

int main()
{
    int i, j, n = 1;

    printf("Segitiga terbalik:\n");
    for (i = 5; i >= n; i--)
    { /*i= baris, j= kolom n=jumlah baris*/
        for (j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}