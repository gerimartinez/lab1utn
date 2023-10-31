#include <stdlib.h>
#include <stdio.h>
#include <math.h>


// Crear una función “esPrimo”, que reciba un número y devuelva el valor 1 si es un
// número primo o 0 en caso contrario.
int esPrimo(int);

void main() 
{
    int numero, respuesta;
    
    printf("Ingrese un numero \n");
    scanf("%d", &numero);
    
    respuesta = esPrimo(numero);

    

}

int esPrimo(int num)
{
    if (num <= 1) {
        return 0; // 0 y 1 no son primos.
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // Encontró un divisor, no es primo.
        }
    }

    return 1; // No se encontraron divisores, es primo.
}
 