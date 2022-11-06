#include <stdio.h>
#include <stdbool.h>
#include "entradas.c"

void ej4a1eyf(void) {
    int x = pedirEntero();
    int y = pedirEntero();
    if (x >= y) {
        printf("x -> %d, y -> %d\n", x, y);
        x = 0;
        printf("x -> %d, y -> %d\n", x, y);
    }
    else if (x <= y) {
        printf("x -> %d, y -> %d\n", x, y);
        x = 2;
        printf("x -> %d, y -> %d\n", x, y);
    }
    printf("x -> %d, y -> %d\n", x, y);
}

// b)

void ejercicio4b(void) {
    int x = pedirEntero();
    int y = pedirEntero();
    int z = pedirEntero();
    int m = pedirEntero();
    if (x < y) {
        m = x;
    }
    else if (x >= y) {
        m = y;
    }
    printf("x -> %d, y -> %d, z -> %d, m -> %d\n", x, y, z, m);
    if (m < z) {
    }
    else if (m >= z) {
        m = z;
    }
    printf("x -> %d, y -> %d, z -> %d, m -> %d\n", x, y, z, m);
}

// El valor final de la variable m es 4.

int main(){
    return 0;
}
