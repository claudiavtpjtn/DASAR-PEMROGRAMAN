#include <stdio.h>

int main()
{
    int sabun, shampo, sabun_wajah, uang;
    int total, sisa;

    sabun = 8000 * 2;
    shampo = 35000 * 2;
    sabun_wajah = 39000 * 2;
    uang = 310000;

    total = sabun + shampo + sabun_wajah;
    sisa = uang - total;

    printf("Harga sabun = %d\n", sabun);
    printf("Harga shampo = %d\n", shampo);
    printf("Harga sabun wajah = %d\n", sabun_wajah);
    printf("Total pembelian = %d\n", total);
    printf("Sisa uang Pak Purwa = %d\n", sisa);
    return 0;
}