#include <stdlib.h>
#include <stdio.h>

void main() {
   // Imprimir la suma de los números impares que se encuentran entre los números 1 y 10

    int suma = 0;

    for(int i = 1; i <= 10; i += 2){

        suma = suma + i;

        printf("La suma de los numeros imapres es: %d \n", suma);
    }

    system("pause");
}