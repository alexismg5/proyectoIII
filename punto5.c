#include <stdio.h>
#include <stdbool.h>
#include "entradas.c"

void ej5a1h(void) {
    int i = pedirEntero();
    while (i != 0) {
        printf("i -> %d\n", i);
        i = i - 1;
        printf("i -> %d\n", i);
    }
    printf("i -> %d\n", i);
}

// 1.i

void ej5a1i(void) {
    int i = pedirEntero();
    while (i != 0) {
        printf("i -> %d\n", i);
        i = 0;
        printf("i -> %d\n", i);
    }
    printf("i -> %d\n", i);
}

// b)

// b1

void ej5b1(void) {
    int x = pedirEntero();
    int y = pedirEntero();
    int i = pedirEntero();
    i = 0;
    while (x >= y)
    {
        x = x - y;
        i = i + 1;
        printf("x -> %d, y -> %d, i -> %d\n", x, y, i);
    }
}

// It 1: x -> 10, y -> 3, i -> 1
// It 2: x -> 7, y -> 3, i -> 2
// It 3: x -> 4, y -> 3, i -> 3
// It 4: x -> 1, y -> 3, i -> 4

// b2

void ej5b2(void) {
    int x = pedirEntero();
    int i = pedirEntero();
    int res = pedirEntero();
    assert(res >= 0 && res < 2);
    i = 2;
    res = 1;
    while (i < x && res) {
        res = res && (x % i) != 0;
        i = i + 1;
        printf("x -> %d, i -> %d, res -> %d\n", x, i, res);
    }
}

// It 1: x -> 5, i -> 3, res -> 1
// It 2: x -> 5, i -> 4, res -> 1
// It 3: x -> 5, i -> 5, res -> 1

// b3

// El ejercicio b1 reproduce lo que sería una resta de enteros o la suma del opuesto de un entero.
// El ejercicio b2 dice si un numero es primo.

int main(){
    return 0;
}