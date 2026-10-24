#include <stdio.h>
int main(){
    int U1, U2, U3, U4;
    int a, b, n, Un;

    U1 = 2;
    U2 = 5;
    U3 = 8;
    U4 = 11;

    a = U1;
    b = U2  - U1;
    n = 20;

    printf("deret = %d, %d, %d, %d, ...\n", U1, U2, U3, U4);
    printf("a = %d\n", a);
    printf("b = %d - %d = %d\n", U1, U2, b);
    printf("n =  %d\n", n);

    Un = a + (n - 1) * b;
    printf("U%d = %d + (%d -1) * %d\n", n, a, n, b);
    printf("U%d = %d\n", n, Un);
    return 0;
}