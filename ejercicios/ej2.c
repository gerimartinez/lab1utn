#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main () {
    int num1, num2;

    printf("Ingresa el primer numero: \n");
    scanf("%d", &num1);

    printf("Ingresa el segundo numero: \n");
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("El numero %i es mayor al numero %i \n", num1);
    }
    else if (num1 == num2) {
        printf("Los dos numeros son iguales");
    } 

    else {
        printf("El numero %i es mayor al numero %i \n", num2);
    }

    
}