/*
Nama    : Claudia V.T Panjaitan'
NIM     : 41426004
Prodi   : D IV TRPL
*/

#include <stdio.h>

 int main() {
    int n, i, prima = 1;

    printf("Masukkan bilangan (>= 2): ");
    scanf("%d", &n);

    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            prima = 0;
            printf("%d habis dibagi %d, berhenti memeriksa.\n", n, i);
            break;
        }
    }
    if (prima)
        printf("%d adalah bilangan prima.\n", n);
    else
        printf("%d bukan bilangan prima.\n", n);
    return 0;
 }