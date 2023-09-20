#include <stdlib.h>
#include <stdio.h>

void main() {
    
    int valor = 1;

    while(valor!=0) {

        printf("Ingrese un valor entero (0 para finalizar): \n");
        scanf("%d", &valor);

        if (valor!=0) {
            printf("El valor ingresado: %d \n", valor);
        }
    }
}