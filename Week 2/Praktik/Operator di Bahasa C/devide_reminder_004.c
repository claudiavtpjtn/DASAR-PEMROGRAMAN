#include <stdio.h>
int main()
{
    int x, y;
    float hasil; 
    int sisa;
    
    printf("Nilai x = ");
    scanf("%d", &x);

    printf("Nilai y = ");
    scanf("%d", &y);
    
    //pengerjaan
    hasil = (float)x / y;
    sisa = x % y;
    printf("Hasil pembagian: %.2f\n", hasil);
    printf("Sisa pembagian: %d\n", sisa);

    return 0;

}