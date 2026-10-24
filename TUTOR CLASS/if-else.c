#include <stdio.h>

    int main(){
        int berat;
        printf("Masukkan berat: ");
        scanf("%d", &berat);

        if (berat < 45 ) {
            printf("kurus\n");
        }
        else if (berat >= 45 &&berat <= 60) {
            printf("ideal\n");
        }
        else if (berat >= 61  &&berat <=  80) {
            printf("berlebih\n");
        }
        else if (berat > 80) {
            printf("obesitas\n");
        }
        else if (berat >= 1) {
            printf("kurus\n");
        }
        else {
            printf("tidak valid");
        }
    return 0;
        
    }