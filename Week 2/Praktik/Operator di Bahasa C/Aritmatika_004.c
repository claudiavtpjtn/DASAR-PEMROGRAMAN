#include <stdio.h>

int main()
{
    int x = 10;
    int y = 4;
    float hasil;
    printf("Nilai x = %d\t", x);
    printf("Nilai y = %d\n\n", y);
    //perkalian
    hasil = x*y;
    printf("x * y = %.2f\n", hasil);
    //pembagi
    hasil = x / y;
    printf("x / y = %.2f\n", hasil); 
    //penjumlahan
    hasil = x + y;
    printf("x + y = %.2f\n", hasil);
    //pengurangan
    hasil = x - y;
    printf("x - y = %.2f\n", hasil);
    //modulus
    printf("x mod y = %d\n", x % y);
    
    //increment
    printf("nilai x sebelum x++ = %d\n", x);
    x = x++;
    printf("nilai x setelah x++ = %d\n", x);

    printf("nilai y sebelum y++ = %d\n", y);
    y = y--;
    printf("nilai y setelah y++ = %d\n", y);

    //decrement
    printf("nilai x sebelum x-- = %d\n", x);
    x = x--;
    printf("nilai x setelah x-- = %d\n", x);

    printf("nilai y sebelum y-- = %d\n", y);
    y = y--;
    printf("nilai y setelah y-- = %d\n", y);
    return 0;
}
