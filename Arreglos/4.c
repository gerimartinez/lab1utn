#include <stdlib.h>
#include <stdio.h>

void main() {

    // Dado el vector {10, 20, 5, 15, 30, 20}
    // a. Informar el vector de la forma: "Indice: X, Valor: Y".
    // b. Totalizar el vector e informar el total.
    // c. Informar el contenido de las posiciones impares.
    // d. Informar las posiciones que contienen números impares.
    // e. Informar el mayor número.
    // f. Informar cuántas veces aparece el número 20. 

    int vector[] = {10, 20, 5, 15, 30, 20};
    int total, mayorNumero, contador20, impar;
    contador20 = 0;
    total = 0;

    for(int i = 0; i < 6; i++) {

        printf("Indice: %d y el valor: %d \n", i+1, vector[i]);

        total = total + vector[i];
        printf("El total del vector es: %d \n", total);

        if(vector[i]%2 != 0) {

            printf("El numero en la posicion %d es impar y su valor es: %d \n", i, vector[i]);
            
        }

        if(mayorNumero < vector[i]) {

            mayorNumero = vector[i];
            printf("El numero mayor es: %d \n", mayorNumero);
        }

        if(vector[i] == 20) {

            contador20 = contador20 + 1;
            printf("El numero 20 aparece: %d veces \n", contador20);
        }
    }
} 

   