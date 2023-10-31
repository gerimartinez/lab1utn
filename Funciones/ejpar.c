#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int esPar(int);

int main() 
{
    int numero, numeroPar;
    printf("Ingrese un numero \n");
    scanf("%d", &numero);

    numeroPar = esPar(numero); //funcion

    if(numeroPar == 1)
    {
        printf("El numero es par y su cubo es %d \n", pow(numero, 3));

    } else {

        printf("El numero es impar y su cuadrado es %d \n", pow(numero, 2));
    }

    system("pause");
    return 0;
}

int esPar(int num) //devuelve 1 si el numero es par y 0 si es impar
{
    int resultado = 0; //bandera

    if(num % 2 == 0) 
    {
        resultado = 1;
    }
}