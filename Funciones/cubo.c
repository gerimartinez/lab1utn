#include <stdio.h>
#include <stdlib.h>

float calcularCubo(float);

void main () 
{
    float numero, cubo;

    printf("Ingrese un numero \n");
    scanf("%f", &numero);

    cubo = calcularCubo(numero);
    //cubo = pow(num,3)

    printf("El cubo de %.2f es %.2f \n", numero, cubo);

    system("pause");
}


float calcularCubo(float num)
{
    float resultado = num * num * num;
    return resultado;
}
