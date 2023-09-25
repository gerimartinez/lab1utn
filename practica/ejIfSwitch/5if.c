#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void main() {
    //Escriba un programa que pida ingresar un número y a continuación escriba en la consola si el mismo es par o impar.

    int num, resultado;

    printf("Ingrese un numero \n");
    scanf("%i", &num);

    resultado = num % 2;

    if(resultado == 0){
       printf("El  numero es par \n");
    
    } else {
        printf("El numero es impar \n");
    }

    system("pause");
    
}