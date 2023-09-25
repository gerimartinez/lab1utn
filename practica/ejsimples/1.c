#include <stdlib.h>
#include <stdio.h>

void main() {

    int num1, num2, suma;

    printf("Ingrese el primer numero \n");
    scanf("%i", &num1);

    printf("Ingrese el segundo numero \n");
    scanf("%i", &num2);

    suma = num1 + num2;

    printf("El resultado de la suma de los dos numeros es: %i \n", suma);

    system("pause");
}