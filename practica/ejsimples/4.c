#include <stdlib.h>
#include <stdio.h>

void main() {

    //- Ingresar dos valores, calcular su suma, su producto y la resta del 1ro menos el 2do 
    //valor ingresado, imprimir los resultados

    float valor1, valor2, suma, producto, resta;

    printf("Ingrese un valor \n");
    scanf("%f", &valor1);

    printf("Ingrese un segundo valor \n");
    scanf("%f", &valor2);

    suma = valor1 + valor2;
    producto = valor1 * valor2;
    resta = valor2 - valor1;

    printf("La suma de los valores es: %0.2f \n", suma);
    printf("El producto de los valores es: %0.2f \n", producto);
    printf("La resta de los valores es: %0.2f \n", resta);

    system("pause");
}