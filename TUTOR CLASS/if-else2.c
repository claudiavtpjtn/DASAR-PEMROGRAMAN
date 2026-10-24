// < 160 = pendek, 165 - 170 = ideal, 175 - 180 = tinggi, > 185 = jangkung

#include <stdio.h>

int main(){
    int tinggi;
    printf("Masukkan tinggi: ");
    scanf("%d", &tinggi);

    if (tinggi < 160) {
        printf("pendek\n");
    }
    else if (tinggi >= 165 &&tinggi <= 170) {
        printf("ideal\n");
    }
    else if (tinggi >= 175 &&tinggi <= 180) {
        printf("tinggi\n");
    }
    else if (tinggi > 185) {
    printf("jangkung");
    }
}