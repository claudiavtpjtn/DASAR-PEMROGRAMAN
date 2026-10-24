#include <stdio.h>
int main(){
    char pesan[] = "I'm Happy";

    pesan[0] = 'H';
    pesan[1] = 'e';
    pesan[2] = 'l';
    pesan[3] = 'p';
    pesan[4] = ' ';
    pesan[5] = 'M';
    pesan[6] = 'e';
    pesan[7] = ' ';
    pesan[8] = '!';
    pesan[9] = '\0';

    printf ("%s\n", pesan);
    return 0;
}