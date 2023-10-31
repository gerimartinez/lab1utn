#include <stdlib.h>
#include <stdio.h>

// Escriba un programa que lea 5 números por teclado, los copie a otro array 
// multiplicados por 2 y muestre el segundo array. 

void main()
{
    int primerArray[5];
    int segundoArray[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Ingrese el numero \n", i+1);
        scanf("%d", &primerArray[i]);

        segundoArray[i] = primerArray[i] * 2;

        printf("La multiplicacion por dos de los numeros es: %d \n", segundoArray[i]);
    }
    
}