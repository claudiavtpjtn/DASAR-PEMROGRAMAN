#include <stdio.h>

int main()
{
    int x = 20;
    int y = 8;
    float hasil;

    printf("Nilai x = %d\t", x);
    printf("Nilai y = %d\n\n", y);

    //pembagi
    hasil = x / y;
    printf("x / y = %.2f\n" ,hasil);
    //modulus
    printf("x mod y = %d\n", x % y);
    return 0;
}

