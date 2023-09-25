#include <stdlib.h>
#include <stdio.h>

void main() {

    //Escriba un programa que escriba la tabla de multiplicar del 1, 2,....,9.

    int i, multiplo;
    multiplo = 0;

    for(int i = 1; i <= 9; i++ ) {

        printf("Tabla de multiplicar del: %d \n", i);

        for(int j = 1; j <= 10; j++) {
            
            multiplo = i * j;
            printf("%d x %d = %d  \n", i, j, multiplo);
        }
    }
}