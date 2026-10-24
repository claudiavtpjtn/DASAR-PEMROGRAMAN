#include <stdio.h>

//keterangan ==> 1 = true; 0 = false
int main(){
    int a = 10, b = 20, c;

    c = a > b;
    printf("Hasil dari operasi a > b = %d\n",c);
    c = a >= b;
    printf("Hasil dari operasi a >= b = %d\n",c);
    c = a < b;
    printf("Hasil dari operasi a < b = %d\n",c);
    c = a <= b;
    printf("Hasil dari operasi a <= b = %d\n",c);
    c = a == b;
    printf("Hasil dari operasi a == b = %d\n",c);
    c = a != b;
    printf("Hasil dari operasi a != b = %d\n",c);
    return 0;
}