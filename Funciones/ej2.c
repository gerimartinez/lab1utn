#include <stdlib.h>
#include <stdio.h>

// Crear una función llamada “signo”, que reciba un número real, y devuelva un número
// entero con el valor: -1 si el número es negativo, 1 si es positivo o 0 si es cero.
void signo(float num, int *resultado);
void main()
{
    float numero;
    int resultado;
    
    printf("Ingrese un numero \n");
    scanf("%f", &numero);

    signo(numero, &resultado);
    printf("El signo del numero es: %d \n", resultado);

    system("pause");
}

void signo(float num, int *resultado)
{
    if(num < 0)
    {
        *resultado = -1;

    } else if (num > 0) {

        *resultado =  1;

    } else {
        *resultado =  0;
    }
}
