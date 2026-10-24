 #include <stdio.h>

 int main() {
    int i;

    printf("A. Off-by-one: i < 5\n");
    for (i = 1; i < 5; i++)
        printf("%d ", i);

    printf("\nB. Off-by-one diperbaiki: i <= 5\n");
    for (i = 1; i <= 5; i++)
        printf("%d ", i);

     printf("\nC. Titik koma ekstra setelah for:\n");
    for (i = 0; i < 3; i++);
        printf("Halo, i = %d\n", i);
    return 0;
 }
