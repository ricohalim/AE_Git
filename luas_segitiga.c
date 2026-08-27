#include <stdio.h>
#include <stdlib.h>

int main(){
    int panjang, lebar, luas;

    scanf("%d %d", &panjang, &lebar);

    luas = panjang*lebar;

    printf("Luas dari segitiga ini adalah %d", luas);
}