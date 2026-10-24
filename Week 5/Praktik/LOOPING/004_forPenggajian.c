/* 
Nama      : Claudia V.T. Panjaitan
NIM       : 41426004
Deskripsi : Menerapkan contoh for dari slide (payroll) dengan akumulator total
Tanggal   : 6 Oktober 2026
*/

#include <stdio.h>

int main(){ 
    int count_emp, number_emp = 3; 
    double hours, rate, pay, total_pay = 0.0;

    for (count_emp = 0; count_emp < number_emp; count_emp++) {
        printf("Karyawan ke-%d\n", count_emp + 1);
        printf(" Jam kerja >");
        scanf("%lf", &hours);
        printf(" Tarif per jam > ");
        scanf("%lf", &rate);
        pay = hours * rate;
        printf("    Gaji       = Rp%.2f\n\n", pay);
        total_pay = total_pay + pay;
    }
    printf("Semua karyawan selesai diproses\n");
    printf("Total gaji Rp%.2f\n", total_pay);
return 0;
}