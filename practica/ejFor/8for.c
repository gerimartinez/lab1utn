#include <stdlib.h>
#include <stdio.h>

void main() {
// Escriba un programa que lea un número n1, y escriba la tabla de multiplicar del número.

    int num, multiplo;

    printf("Ingrese un numero \n");
    scanf("%d", &num);

    multiplo = 0;

    for(int i = 0; i <= 10; i++) {
        
        multiplo = num * i;
        printf("%d X %d = %d \n", num, i, multiplo);
    }
}