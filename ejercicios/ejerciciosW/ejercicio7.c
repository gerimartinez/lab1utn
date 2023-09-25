#include <stdlib.h>
#include <stdio.h>

void main() {
//     Ingresar un conjunto de números reales distintos de cero. Para finalizar la entrada de 
//     datos, ingresar un cero. Determinar e informar la cantidad de números que lo forman.

    float numerosIngresados;
    int cantNumeros = 0;
 


    do {

        printf("Ingrese un numero real distinto de cero o cero para finalizar \n");
        scanf("%f", &numerosIngresados);

        if(numerosIngresados != 0){

            cantNumeros = cantNumeros + 1;
        }

    } while(numerosIngresados != 0);

    printf("La cantidad de numeros ingresados es: %i \n", cantNumeros);

    system("pause");
}