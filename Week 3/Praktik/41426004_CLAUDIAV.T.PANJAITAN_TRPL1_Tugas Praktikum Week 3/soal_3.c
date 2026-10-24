#include <stdio.h>
#include <string.h>

int main () 
{
    char A[20], B[20], C[20];

    printf("Enter hobby1: _");
    scanf("%s", A);
    printf("Enter hobby2: _");
    scanf("%s", B);
    printf("Enter hobby3: _");
    scanf("%s", C);

    strupr(A);
    strupr(B);
    strupr(C);
    printf("_%s_%s_%s", A,B,C);
    return 0;
}