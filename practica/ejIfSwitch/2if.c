#include <stdlib.h>
#include <stdio.h>

void main() {
    //Ingresar por teclado dos números, determinar cuál es el mayor y visualizarlo en 
    //pantalla. Informar también si los números son iguales.
    int num1, num2;

    printf("Ingrese el primer numero \n");
    scanf("%i", &num1);

    printf("Ingrese el segundo numero \n");
    scanf("%i", &num2);

    if (num1 > num2) {
        printf("El numero mayor es: %i \n", num1);
    } else {
        if(num2 > num1) {
            printf("El numero mayor: %i \n", num2);
        } else {
            printf("Los dos numeros son iguales \n");
        }
}
}