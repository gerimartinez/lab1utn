#include <stdlib.h>
#include <stdio.h>

int main() {
    int valor;

    do {
        
        printf("Ingrese un valor entero (0 para finalizar): \n");
        scanf("%d", &valor);

        if (valor != 0) {
            printf("Valor ingresado: %d \n", valor);
        }
        
    } while (valor != 0);

    system("pause");
    
}