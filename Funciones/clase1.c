#include <stdlib.h>
#include <stdio.h>

float sumar(float, float);

void main() {

    float numero1, numero2, resultado;

    printf("Ingresa primer numero \n");
    scanf("%f", &numero1);

    printf("Ingresa segundo numero \n");
    scanf("%f", &numero2);

    resultado = sumar(numero1, numero2);

    int numero3;
    printf("Ingresa tercer numero \n");
    scanf("%d", &numero3);

    resultado = sumar(resultado, numero3);

    printf("La suma es: %f \n", resultado);

    system("pause");
}

float sumar(float num1, float num2)
{
    float respuesta;
    respuesta = num1 + num2;
    return respuesta;
}