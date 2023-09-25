#include <stdlib.h>
#include <stdio.h>

void main() {
    //Dado un número introducido por el usuario, indicar si este es positivo, negativo o nulo.

    int num1;

    printf("Ingrese un numero \n");
    scanf("%i", &num1);

    if(num1 > 0) {
        
        printf("El numero ingresado es positivo \n");
    } else {

        if(num1 < 0) {
            printf("El numero ingresado es negativo \n");
        } else {
            printf("El numero ingresado es nulo \n");
        }
    }

    system("pause");
}