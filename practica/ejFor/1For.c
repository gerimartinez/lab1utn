#include <stdio.h>
#include <stdlib.h>

void main() {

// Realizar un programa que calcule la suma de 10 números reales 
// ingresados por teclado. Informar el resultado.

    float num, suma;
    suma = 0;

    for (int i = 1; i <= 10; i++) {

        printf("Ingrese un numero %d: \n", i);
        scanf("%f", &num);

        suma = suma + num;
    } 

    printf("La suma de los numeros es: %f \n", suma);

    system("pause");
}