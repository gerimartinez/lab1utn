#include <stdlib.h>
#include <stdio.h>

void main() {
    //Diseñe un algoritmo que sume los 20 primeros números impares.

    int suma = 0;

    for(int i = 1; i <= 20; i +=2) {

        suma = suma + i;

    }

    printf("La suma de los primeros 20 numeros impares es: %d \n", suma);
}