/*
Nama    : Claudia V.T Panjaitan'
NIM     : 41426004
Prodi   : D IV TRPL
*/

#include <stdio.h> 

int main(){
    int i,j;
    for (i = 1; i <= 3; i++) {
        for (j = 1; j <= 3; j++) {
            if (j == 2) continue;
            if (i == 3) break;
            printf("%d%d ", i, j);
        }
    }
}