#include <stdlib.h>
#include <stdio.h>

float convertirCubo(float num);
void main()
{
    float numero, respuesta;

    printf("Ingrese un numero \n");
    scanf("%f", &numero);

    respuesta = convertirCubo(numero);

    printf("El cubo del numero ingresado es: %.2f \n", respuesta);

    system("pause");
}

float convertirCubo(float num) 
{
    float respuesta;
    respuesta = num * num * num;
    return respuesta;
}