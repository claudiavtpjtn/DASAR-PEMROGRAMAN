/*
Nama    : Claudia V.T Panjaitan'
NIM     : 41426004
Prodi   : D IV TRPL
*/

#include <stdio.h>

int main(){
    int i = 1;

    for (i = 1; i <= 20; i++) {
        if (i % 3 == 0)
            continue;               /* lewati kelipatan 3 */
        printf("%d ", i);
    }
}

