#include <stdlib.h>
#include <stdio.h>

// Crear una función que reciba un número cualquiera y que devuelva como resultado
// la suma de sus dígitos

int sumaCifras(int num);
void main()
{
    int numero, resultado;

    printf("Ingrese un numero de dos cifras \n");
    scanf("%d", &numero);

    resultado = sumaCifras(numero);

    printf("La suma de las cifras %d es: %d \n", numero, resultado);

    system("pause");
}

int sumaCifras(int num)
{
    int suma = 0;

    while(num != 0)
    {
        suma = suma + num % 10;
        num = num / 10;     
    }

    return suma;
}